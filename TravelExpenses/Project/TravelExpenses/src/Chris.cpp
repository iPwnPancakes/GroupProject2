#include "Chris.h"
#include <iostream>

using namespace std;

Chris::Chris() {};


int Chris :: userInputDays()
{
    int totalDaysOnTrip=0;
    while (totalDaysOnTrip < 1)
    {
        cout << "Number of days spent on trip:\n";
        cin >> totalDaysOnTrip;
        if (totalDaysOnTrip < 1) //user input validation
        {
            cout << "\nError, please enter a value greater than 1\n";
        }
    }
	return totalDaysOnTrip;
}

void Chris::userInputLeaveReturn(double array[])
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

double Chris::userInputAirFare()
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

double Chris::userInputRentalCar(int carsRented)
{
    double rentalCar_Cost = 0;
	double cost;
	for (int i = 0; i < carsRented; i++) 
	{
		cout << "Cost of car " << i+1 << ":\n";
		cin >> cost;
		while(cost < 0)
		{
			cout << "\nError, Please enter a value greater than 0:\n";
			cin >> cost;
		}
		rentalCar_Cost += cost;
	}
	return rentalCar_Cost;
}

double Chris::userInputMilesDriven(int carsRented)
{
    double milesDriven = 0;
    for (int i = 0; i < carsRented; i++)
    {
        cout << "Miles driven with car " << i+1<< ": ";
        cin >> milesDriven;
    }
    return milesDriven * 0.27;
}
