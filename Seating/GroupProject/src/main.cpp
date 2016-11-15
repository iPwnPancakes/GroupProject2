#include <iostream>
#include <ostream>

using namespace std;

/**
DRIVER TO BE USED IN PLACE OF main.cpp
WRITTEN BY: DANIEL Buenrrostro
**/

const int ROWS = 15;
const int SEATS = 30;

char seatArray[ROWS][SEATS];

double priceArray[ROWS];

/** STUBS TO BE USED BEFORE THE ASSIGNMENTS OF METHODS**/

/**1**/
void rowPrices(int ROWS, double prices[]) {
	for (int i = 0; i < ROWS; i++) {
		prices[i] = 9999.99;
	}
}

/**2**/
int getRow() {
	int rowWanted;
	cin >> rowWanted;
	return rowWanted;
}

/**3**/
int getSeatNumber() {
	int seatWanted;
	cin >> seatWanted;
	return seatWanted;
}

/**4**/
double getPriceOfRow(int row, double priceArray[]) {
	return 100;
}

/**5**/
bool seatPerson(char seatArray[ROWS][SEATS], int row, int seat) {
	return true;
}

/**6**/
double getTotalTicketPrices(char seatArray[ROWS][SEATS], double priceArray[]) {
	return 99999.99;
}

/**7**/
int getSeatsSold(char seatArray[ROWS][SEATS]) {
	return 224;
}

/**8**/
void showAvailableRowSeats(char seatArray[ROWS][SEATS]) {
	cout << "Available seats: ALL OF THEM." << endl;
}

/**9**/
int getTotalAvailableSeats(char seatArray[ROWS][SEATS]) {
	return 226;
}

/**10**/
void displaySeating() {
	cout << "SEATS ARRAY" << endl;
}

void displayMenu() {
	cout << "Choose an option: " << endl;
	cout << "1. Sell tickets" << endl;
	cout << "2. View total ticket sales" << endl;
	cout << "3. View total amount of seats sold" << endl;
	cout << "4. View amount of seats available in each row" << endl;
	cout << "5. View amount of all seats available" << endl;
	cout << "6. Exit" << endl;
}

void sellTickets() {
	int ticketsSold;
	double totalPrice = 0;

	cout << "How many tickets will be sold?" << endl;
	cin >> ticketsSold;

	for (int i = 0; i < ticketsSold; i++) {
		int rowWanted, seatWanted;

		do {
			cout << "Which row do you want?" << endl;
			rowWanted = getRow();
			cout << "Which seat do you want?" << endl;
			seatWanted = getSeatNumber();
		} while (!seatPerson(seatArray, rowWanted, seatWanted)); //Do while the user entered an invalid row and seat value.

		totalPrice += getPriceOfRow(rowWanted, priceArray);
	}
	cout << "Total price of tickets purchased: " << totalPrice << endl;
}

int main()
{

	int choice;

	do
	{
		displayMenu();
		cin >> choice;
		switch (choice)
		{
		case 1: sellTickets(); break;
		case 2: cout << "Total ticket sales: " << getTotalTicketPrices(seatArray, priceArray) << endl; break;
		case 3: cout << "Total seats sold: " << getSeatsSold(seatArray) << endl; break;
		case 4: showAvailableRowSeats(seatArray); break;
		case 5: cout << "Total amount of seats available: " << getTotalAvailableSeats(seatArray) << endl; break;
		case 6: break;
		default:
			cout << "Please enter a valid menu value (1 - 6)" << endl;
			cin >> choice;
		}
	} while (choice != 6);

	cout << "Goodbye!" << endl;
	system("pause");
	return 0;
}


