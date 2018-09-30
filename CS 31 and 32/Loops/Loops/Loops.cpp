// This program shows how to use various kinds of loops.
// CAN ANYONE SPOT THE BUG IN THIS PROGRAM???

#include <iostream>          // for std::cout and std::cin
using namespace std;         // supports cout and cin

int main( )
{
  int starting_point = 0, ending_point = 0, counter = 0;
  char ans = 'y';
  bool found_a_number = false;
 
  do {
     cout << "Please enter a starting and ending point:";
     cin  >> starting_point >> ending_point;
 
     counter = starting_point;
     if (starting_point <= ending_point) {
        cout << "Here's all the even numbers between these points" << endl;
        while (counter < ending_point) {
           counter = counter + 1;
           if ((counter % 2) == 0) {
              cout << counter << " ";
			  if (!found_a_number) {
				 found_a_number = true;
			  }
           }
        }
     }
 
	 if (found_a_number) cout << endl;
     cout << "Continue (y/n)? ";
     cin  >> ans;
  } while (ans == 'y');
  return 0;
}
 
