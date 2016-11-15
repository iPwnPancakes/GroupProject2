

using namespace std;

/** STUBS TO BE USED BEFORE THE ASSIGNMENTS OF METHODS**/

Common::Common() {};

/**1**/
void Common::rowPrices(int ROWS, double prices[]) {
  double rowPrice = 0;
  for(int i = 0; i < prices.length; i++) {
    cout << "What is the price of row " << i + 1 << ":" << endl;
    cin >> rowPrice;
    while(rowPrice <= 0) {
      cout << "Please enter a positive value:" << endl;
      cin >> rowPrice;
    }
    prices[i] = rowPrice;
  }
}

/**2**/
int Common::getRow() {
  int row;
  cout << "Which row would you like to sit in: " << endl;
  cin >> row;
  while(row < 1 || row > 30) {
    cout << "Please enter a number between 1 and 15: " << endl;
    cin >> row;
  }
  return row - 1;
}

/**3**/
int Common::getSeatNumber() {
  int seatNum;
  cout << "Which seat number would you like to sit in: " << endl;
  cin >> seatNum;
  while(seatNum < 1 || seatNum > 30) {
    cout << "Please enter a number between 1 and 30: " << endl;
    cin >> seatNum;
  }
  return seatNum - 1;
}

/**4**/
double Common::getPriceOfRow(int row, double priceArray[]) {
  return priceArray[row];
}

/**5**/
bool Common::seatPerson(char seatArray[][], int row, int seat) {
  if(seatArray[row][seat] == '*') {
    return false;
  }
  seatArray[row][seat] = '*';
  return true;
}

/**6**/
double Common::getTotalTicketPrices(char seatArray[][], double priceArray[]) {
  double total = 0;
  for(int i = 0; i < seatArray.length; i++) {
    for(int j = 0; j < seatArray[i].length; j++) {
      if(seatArray[i][j] == '*') total += priceArray[i];
    }
  }
  return total;
}

/**7**/
int Common::getSeatsSold(char seatArray[][]) {
  int seatsSold = 0;
  for(int i = 0; i < seatArray.length; i++) {
    for(int j = 0; j < seatArray[i].length; j++) {
      if(seatArray[i][j] == '*') seatsSold++;
    }
  }
  return seatsSold;
}

/**8**/
void Common::showAvailableRowSeats(char seatArray[][]) {
  int rowSeats = 0;
  for(int i = 0; i < seatArray.length; i++) {
    rowSeats = 0;
    for(int j = 0; j < seatArray[i].length; j++) {
      if(seatArray[i][j] == '#') rowSeats++;
    }
    cout << "Available seats in row " << i + 1 << ": " << rowSeats << endl;
  }
}

/**9**/
int Common::getTotalAvailableSeats(char seatArray[][]) {
  int openSeats = 0;
  for(int i = 0; i < seatArray.length; i++) {
    for(int j = 0; j < seatArray[i].length; j++) {
      if(seatArray[i][j] == '#') openSeats++;
    }
  }
  return openSeats;
}
