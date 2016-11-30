#include <iostream>
#include <iomanip>
#include <ostream>

using namespace std;

const int ROWS = 15;
const int SEATS = 30;

char seatingArray[ROWS][SEATS];

double priceArray[ROWS];

/** START of Christopher Self's Code **/
void rowPrices(int ROWS, double priceArray[])
{
	double price;
	for (int index = 0; index < ROWS; index++)
	{
		cout << "What is the price of row " << (index + 1) << "?\n";
		cin >> price;
		while (price <= 0)
		{
			cout << "Error, please enter a value greater than 0:\n";
			cin >> price;
		}
		priceArray[index] = price;
	}
}

int getRow()
{
	int rowChoice;
	cout << "Which row would you like to sit in? (1-15)\n";
	cin >> rowChoice;
	while (rowChoice < 1 || rowChoice > 15)
	{
		cout << "Error, that row does not exist, please choose another row:\n";
		cin >> rowChoice;
	}
	return rowChoice - 1;
}

int getSeatNumber()
{
	int seatChoice;
	cout << "What seat would you like to sit in? (1-30)\n";
	cin >> seatChoice;
	while (seatChoice < 1 || seatChoice > 30)
	{
		cout << "Error, please choose a valid seat option\n";
		cin >> seatChoice;
	}
	return seatChoice - 1;
}

double getPriceOfRow(int row, double priceArray[]) {
	return priceArray[row];
}

/** END of Christopher Self's Code **/

/** START of Jaime Bright's Code**/

double getTotalTicketPrices(char seatArray[][SEATS], double priceArray[]) {
    double total = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS; j++) {
            if (seatArray[i][j] == '*') {
                total += priceArray[i];
            }
        }
    }
    return total;
}
 
int getSeatsSold(char seatArray[][SEATS]) {
    int seatsSold = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS; j++) {
            if (seatArray[i][j] == '*') {
                seatsSold++;
            }
        }
    }
    return seatsSold;
}
 
void showAvailableRowSeats(char seatArray[][SEATS]) {
    int rowSeats;
    for (int i = 0; i < ROWS; i++) {
        rowSeats = 0;
        for (int j = 0; j < SEATS; j++) {
            if (seatArray[i][j] == '#') {
                rowSeats++;
            }
        }
        cout << "Available seats in row " << i + 1 << ": " << rowSeats << "\n";
    }
}
 
int getTotalAvailableSeats(char seatArray[][SEATS]) {
    int seatsOpen = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS; j++) {
            if (seatArray[i][j] == '#') {
                seatsOpen++;
            }
        }
    }
    return seatsOpen;
}

/** END of Jaime Bright's Code **/

/** Start of Daniel Buenrrostro's Code **/

bool seatPerson(char seatArray[][SEATS], int rowRequested, int seatRequested) {
	if (seatArray[rowRequested][seatRequested] == '*') {
		cout << "Seat already taken! Please chose another!" << '\n';
		return false;
	}
	else {
		seatArray[rowRequested][seatRequested] = '*';
	}
	return true;
}

void displayMenu() {
	cout << "1. Sell tickets" << endl;
	cout << "2. View total ticket sales" << endl;
	cout << "3. View total amount of seats sold" << endl;
	cout << "4. View amount of seats available in each row" << endl;
	cout << "5. View amount of all seats available" << endl;
	cout << "6. Exit" << endl;
	cout << "Choose an option: ";
}

void sellTickets() {
	int ticketsSold;
	double totalPrice = 0;

	cout << "How many tickets will be sold?" << endl;
	cin >> ticketsSold;

	for (int i = 0; i < ticketsSold; i++) {
		int rowWanted, seatWanted;

		do {
			rowWanted = getRow();
			seatWanted = getSeatNumber();
		} while (!seatPerson(seatingArray, rowWanted, seatWanted)); //Do while the user entered an invalid row and seat value.

		totalPrice += getPriceOfRow(rowWanted, priceArray);
	}
	cout << "Total price of tickets purchased: $" << setprecision(2) << fixed << totalPrice << endl;
}

void displaySeating(char seatArray[][SEATS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < SEATS; j++) {
			cout << seatArray[i][j];
		}
		cout << '\n';
	}
}

void fillSeats(char seatArray[][SEATS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < SEATS; j++) {
			seatArray[i][j] = '#';
		}
	}
}

int main()
{
	fillSeats(seatingArray);
	rowPrices(ROWS, priceArray);
	int choice;
	do
	{
		cout << "Seating" << '\n';
		displaySeating(seatingArray);
		displayMenu();
		cin >> choice;
		switch (choice)
		{
			case 1: sellTickets(); cout << '\n'; break;
			case 2: cout << "Total ticket sales: $" << setprecision(2) << fixed << getTotalTicketPrices(seatingArray, priceArray) << endl; cout << '\n'; break;
			case 3: cout << "Total seats sold: " << getSeatsSold(seatingArray) << endl; cout << '\n'; break;
			case 4: showAvailableRowSeats(seatingArray); cout << '\n'; break;
			case 5: cout << "Total amount of seats available: " << getTotalAvailableSeats(seatingArray) << endl; cout << '\n'; break;
			case 6: cout << '\n'; break;
			default: cout << "Please enter a valid menu value (1 - 6)" << endl; break;
		}
	} while (choice != 6);

	cout << "Goodbye!" << endl;
	system("pause");
	return 0;
}

/** END of Daniel Buenrrostro's Code **/

