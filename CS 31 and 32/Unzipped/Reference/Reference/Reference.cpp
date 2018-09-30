// This program demonstrates how you can use reference parameters

#include <iostream>          // for std::cout and std::cin
using namespace std;         // supports cout

void get_values( int& input1, int& input2 );
void swap_values( int& var1, int& var2 );
void show_values( int value1, int value2 );

int main( )
{
  int first = 0, second = 0;
 
  get_values( first, second );
  show_values( first, second );
  swap_values( first, second );
  show_values( first, second );	  
  return 0;
}
 
void get_values( int& input1, int& input2 )
{
  cout << "Please enter two values: ";
  cin  >> input1 >> input2;
}
 
void swap_values( int& var1, int& var2 )
{
  int temp = var2;
  var2 = var1;
  var1 = temp;
}
 
void show_values( int value1, int value2 )
{
  cout << "value1 = " << value1 << " and value2 = " << value2 << endl;
}

