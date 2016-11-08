#include <iostream>

using namespace std;

/*Should have no parameters and prompts the user to enter an integer.
Validate that the number entered is NOT LOWER THAN ONE.
Return the integer the user entered*/
int Chris :: userInputDays() //Function to ask how many days the trip lasted, and stores the value in totalDaysOnTrip
{
    int totalDaysOnTrip=0;
    while (totalDaysOnTrip < 1) //while loop to repeat the userInputDays() function until the user enters a value greater than 1
    {
        cout << "Number of days spent on trip:\n";
        cin >> totalDaysOnTrip;
        if (totalDaysOnTrip < 1) //user input validation
        {
            cout << "\nError, please enter a value greater than 1\n";
        }
        else
        {
            cout << "The trip lasted " << totalDaysOnTrip << " day(s)\n";
        }
    }
    return totalDaysOnTrip;
}

/*2-!!! Should take an array as a parameter and prompts the user to enter two double values(00.00 = 12:00am, 23.59 = 11:59pm || Essentially military time)
    - Time departed
    - Time arrived*/
void Chris :: userInputLeaveReturn(double array[])
{
    cout << "Time departed from home at start of trip(00.00 = 12:00am, 23:59 = 11:59pm):\n";
    cin >> array[0];
    cout << "Time arrived to home at end of trip(00.00 = 12:00am, 23.59 = 11:59pm):\n";
    cin >> array[1];
    while(array[0] < 00.00 || array[1] > 23.59)
    {
        if (array[0] < 00.00)
        {
            cout << "\nError, please enter a value greater than or equal to 00.00\n";
            cin >> array[0];
        }
        if (array[1] > 23.59)
        {
            cout << "\nError, please enter a value less than or equal to 23.59\n";
            cin >> array[1];
        }
    }
}

/*3- Should have no parameters and prompts the user to enter a double representing the round-trip airfare.
Validate that the double entered is NOT NEGATIVE. Return the double value.
•The amount of any round-trip airfare*/
double Chris :: userInputAirFare()
{
    double airFare;
    cout << "Total airfare:\n";
    cin >> airFare;
    if (airFare < 0)
    {
        cout << "\nError, Please enter a value that is NOT less than 0\n";
        return userInputAirFare();
    }
    else
    {
        return airFare;
    }
}

/*4- Should have no parameters and prompts the user to enter a double representing the car rental amount.
Validate that the double entered is NOT NEGATIVE. Return the double value.
•The amount of any car rentals
*/
double Chris :: userInputRentalCar()
{
    double rentalCar_Cost;
    cout << "Total rental car cost:";
    cin >> rentalCar_Cost;
    if (rentalCar_Cost < 0)
    {
        cout << "\nError, Please enter a value that is NOT less than 0\n";
        return userInputRentalCar();
    }
    else
    {
        return rentalCar_Cost;
    }
}
/*5- Should take an integer as a parameter that represents the amount of cars rented.
FOR EACH car, prompt the user to enter the amount of miles driven.
Total the values then multiply that value by 0.27. Return the final double.*/

double Chris :: userInputMilesDriven(int carsRented)
{
    double milesDriven = 0;
    for (int i = 0; i < carsRented; i++)
    {
        cout << "Miles driven with car " << i+1<< ": ";
        cin >> milesDriven;
    }
    return milesDriven * 0.27;
}
