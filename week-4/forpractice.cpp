#include <iostream>

using namespace std;

int main() {
  int rows, columns;

  // Get the number of rows and columns from the user
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> columns;

  // Create a 2D string array to store the user input
  char myArray[rows][columns];

  // Get the user input for each element in the 2D string array
  for (int row = 0; row < rows; row++) {
    for (int column = 0; column < columns; column++) {
      cin >> myArray[row][column];
    }
  }

  // Print the 2D string array
  for (int row = 0; row < rows; row++) {
    for (int column = 0; column < columns; column++) {
      cout << myArray[row][column] << " ";
    }
    cout << endl;
  }

  return 0;
}
