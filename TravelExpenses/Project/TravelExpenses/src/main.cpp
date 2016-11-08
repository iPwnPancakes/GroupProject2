#include <iostream>
#include "Chris.h"
#include "Jaime.h"

using namespace std;

Chris CHRISTOPHER; //Instance of Christopher Self's code.
Jaime JAIME; // Instance of Jaime Bright's code.

const int SIZE = 2;
double ArrivalDeparture[SIZE];

int main()
{
	//Daniel Buenrrostro's implementation of Christopher Self's code
	int DaysSpent = CHRISTOPHER.userInputDays();
	CHRISTOPHER.userInputLeaveReturn(ArrivalDeparture);
	double AirFare = CHRISTOPHER.userInputAirFare();
	int CarsRented;
	cout << "How many cars were driven?\n";
	cin >> CarsRented;
	double RentalCost = CHRISTOPHER.userInputRentalCar(CarsRented);
	double MilageCost = CHRISTOPHER.userInputMilesDriven(CarsRented);

	//Daniel Buenrrostro's implementation of Jaime Bright's code.
	double ParkingFee = JAIME.parkingFee(DaysSpent);
	double TaxiFare = JAIME.taxiFare(DaysSpent);
	double RegistrationFee = JAIME.registrationFees();
	double MealFee = JAIME.mealFees(ArrivalDeparture);

	cout << "\n";
	cout << "Days spent on trip: " << DaysSpent << "\n";
	cout << "Departure time: " << ArrivalDeparture[0] << "\n" << "Arrival time: " << ArrivalDeparture[1] << "\n";
	cout << "Air fare: " << AirFare << "\n";
	cout << "Rental car costs: " << RentalCost << "\n";
	cout << "Cars rented: " << CarsRented << "\n";
	cout << "Milage cost: " << MilageCost << "\n";
	cout << "\n";
	cout << "Parking Fee: " << ParkingFee << "\n";
	cout << "Taxi Fare: " << TaxiFare << "\n";
	cout << "Registration Fee: " << RegistrationFee << "\n";
	cout << "Meal Fee: " << MealFee << "\n";

	system("pause");
}
