// This program demonstrates shows an example of a stub program.
// Since the grader function is stubbed out, notice that this 
// program can be completed and tested without having the grader
// function designed. 

#include <iostream>          // for std::cout
using namespace std;         // supports cout

// precondition:  five quiz arguments have been assigned
// postcondition: computes the average of four quizzes, having
//                dropped the lowest score
// STUBBED OUT FOR TESTING 
double grader( int quiz1, int quiz2, int quiz3, int quiz4, int quiz5 );

int main( )
{
  const int NUM_STUDENTS = 25;
  int i = 0;
 
  cout << "\t\tCS 52 GRADEBOOK PROGRAM" << endl;
  while ( i < NUM_STUDENTS ) {
    cout << "Student " << i << "\tOverall Score:";
    cout << grader( 10, 20, 30, 40, 50 ) << endl;
    ++i;
  }
  return 0;
}
 
// STUBBED OUT FOR TESTING
double grader(int quiz1, int quiz2, int quiz3, int quiz4, int quiz5) {
  return( 90.0 );
}
 
