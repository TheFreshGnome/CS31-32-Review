// An example to experiment playing around with pointers

#include <iostream>
using namespace std;

void dump( int *pi, int *pj );

int main(int argc, char* argv[])
{
	int i  , j;
	int *pi, *pj;

	i = 1;  pi = &i;
	j = 2;  pj = &j;

	dump( pi, pj );
	*pi = *pj;
	dump( pi, pj );
	pi = pj;
	dump( pi, pj );

	return( 0 );
}

void dump( int *pi, int *pj ) {
	cout << "pi points to an int with value=" << *pi << endl;
	cout << "pj points to an int with value=" << *pj << endl;
	if (pi == pj) 
		cout << "pi == pj" << endl;
	else
		cout << "pi != pj" << endl;

	if (*pi == *pj) 
		cout << "*pi == *pj" << endl;
	else
		cout << "*pi != *pj" << endl;		
}
