#ifndef H_CHRIS
#define H_CHRIS

class Chris
{
    public:
		/**
		@brief	Dummy constructor method used to store all methods written by CHRISTOPHER SELF.
		*/
		Chris();

		/**
		@brief	Asks the user how many days they spent on the trip. Must be greater than 1.
		@return	int	The number of days.
		*/
        int userInputDays();

		/**
		@brief	Takes an array of size TWO as an arguement. Sets the first element to any value greater than 0 and the second element to any value greater than 23.59.
		@param	double	array	The array to be manipulated
		*/
        void userInputLeaveReturn(double array[]);

		/**
		@brief	Prompts the user to enter the round-trip air fare amount. Must be greater than 0.
		@return	double	Air fare amount.
		*/
        double userInputAirFare();

		/**
		@brief	Asks the user the amount they paid for each rental car not including milage. Must be greater than 0.
		@param	int	carsRented	The amount of cars rented.
		@return	double	The total amount paid for each rental car.
		*/
        double userInputRentalCar(int carsRented);

		/**
		@brief	Totals the mileage for each car then calculates the costs.
		@param	int	carsRented	Amount of cars rented.
		@return	double	The milage cost.
		*/
        double userInputMilesDriven(int carsRented);
};

#endif
