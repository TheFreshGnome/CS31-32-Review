// This program shows how the relational operators work with guarded 
// actions.


#include <iostream>          // for std::cout and std::cin
using namespace std;         // supports cout and cin

int main( )
{
  // Declare needed variables
  double value1 = 0.0, value2 = 0.0;
 
  // Prompt the user for values
  cout << endl << "\t\tSelection Program" << endl << endl;
  cout << "Please enter two values: ";
  cin  >> value1 >> value2;
 
  if ( value1 < value2 ) {
 	cout << "The first is less than the second" << endl;
  }
  if ( value1 == value2 ) {
	cout << "The first equals the second" << endl;
  }
  if ( value1 > value2 ) {
	cout << "The first is greater than the second" << endl;
  }
  if ( value1 <= value2 ) {
	cout << "The first is less than or equal to the second" << endl;
  }
  if ( value1 >= value2 ) {
	cout << "The first is greater than or equal to the second value" << endl;
  }
  if ( value1 != value2 ) {
	cout << "The first does not equal the second" << endl;
  }
 
  // This next code segment demonstrates the precedence rules 
  if ( 2 * value1 + 7.0 < value2 - 12.2 * 1.1 ) {
	cout << "The first complex expression is true" << endl;
  }
  if ( 2.5 * value1 == value2 / 2.0 ) {
	cout << "The second complex expression is true" << endl;
  }
  if ( 100 / value1 > value2 * 3 ) {
  	cout << "The third complex expression is true" << endl;
  }
 
  return 0;
}

