// This program demonstrates shows an example of a driver program
// for the grader function 

#include <iostream>          // for std::cout
using namespace std;         // supports cout

// precondition:  five quiz arguments have been assigned
// postcondition: computes the average of four quizzes, having
//                dropped the lowest score
double grader( int quiz1, int quiz2, int quiz3, int quiz4, int quiz5 );

// precondition:  both integer arguments have been assigned
// postcondition: arguments have been swapped for one another
void swap_numbers( int& var1, int& var2 );

int main( )
{
  int q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0;
 
  cout << "Enter quiz scores " << endl;
  cin  >> q1 >> q2 >> q3 >> q4 >> q5;
  
  cout << "grader() returned " << grader( q1, q2, q3, q4, q5 ) << endl;
  return 0;
}

double grader(int quiz1, int quiz2, int quiz3, int quiz4, int quiz5) {
  double average = 0.0;
  // put the lowest score into quiz1
  int i = 0;
  while ( i <= 4 ) {
    i++;
    if (i == 1) {
	if (quiz1 > quiz2)	swap( quiz1, quiz2 );
    }
    if (i == 2) {
	if (quiz1 > quiz3)	swap( quiz1, quiz3 );
    }
    if (i == 3) {
	if (quiz1 > quiz4)	swap( quiz1, quiz4 );
    }
    if (i == 4) {
	if (quiz1 > quiz5)	swap( quiz1, quiz5 );
    }
  }
 
  // average the remaining scores in quiz2, quiz3, quiz4 and quiz5
  average = double( quiz2 + quiz3 + quiz4 + quiz5 ) / 4.0;
 
  // return the result
  return average;
}
 
void swap_values( int& var1, int& var2 )
{
  int temp = var2;
  var2 = var1;
  var1 = temp;
}
 
