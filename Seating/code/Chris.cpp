
#include <iostream>
using namespace std;

int const ROW_SIZE = 15;
int const SEAT_SIZE = 30;
double rowPrices[ROW_SIZE];
/* Should take an integer array representing the row number and a double array representing the price of the row as parameters.
  FOR EACH ROW prompt the user to enter the price of the row,
  then set the index of the price array to the price entered.
  VALIDATE the user entered a positive value.
  Should NOT return anything.*/
void priceofRow(int ROWS, double priceArray[])
{
    double price;
    for (int index = 0; index < ROWS; index++)
    {
        cout << "What is the price of row " << (index + 1) << "?\n";
        cin >> price;
        while (price <= 0)
        {
            cout << "Error, please enter a value greater than 0\n";
            cin >> price;
        }
        priceArray[index] = price;
    }
}
/* Prompt a user which row they would like to sit in.
  VALIDATE the value entered is between or equal to 1 AND 15.
  Return the value - 1 as the integer data type.*/

int userInput_rowSelection()
{
    int rowChoice;
    cout << "\nWhich row would you like to sit in? (1-15)\n";
    cin >> rowChoice;
    while (rowChoice < 1 || rowChoice > 15)
    {
        cout << "Error, that row does not exist, please choose another row:\n";
        cin >> rowChoice;
    }
    return rowChoice - 1;
}

/*- Prompt the user which seat number they would like to sit in.
  VALIDATE the value entered is between or equal to 1 AND 30.
  Return the value - 1 as the integer data type.*/

int userInput_seatSelection()
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

/*The method should take an integer representing the row number
and a double array representing the row prices as parameters.
  Return the price of the row.*/

double getRowPrice(int rowNumber , double priceArray[])
{
    return priceArray[rowNumber];
}

int main()
{

    priceofRow(ROW_SIZE, rowPrices);
    int row = userInput_rowSelection();
    int seat = userInput_seatSelection();
    double rowPrice = displayRowPrice(row, rowPrices);
    cout << "Row Chosen: " << row + 1 << "\n";
    cout << "Seat Chosen: " << seat + 1 << "\n";
    cout << "Price of Seat Chosen: " << rowPrice << "\n";
    return 0;
}
