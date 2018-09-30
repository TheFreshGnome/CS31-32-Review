#include <iostream>
using namespace std;

// pass-by-value
void printOne( int value );
// pass-by-reference
void changeOne( int& value );

// const-array parameter
void printArray( const int array[], int size );
// array parameter
void doubleAllItems( int array[], int size );

int main( )
{
	const int SIZE = 5;

	int a[ SIZE ]  = { 1, 2, 3 };  
	// how will C++ initialize each of these elements?
	printOne( a[ 0 ] );
	printOne( a[ 1 ] );
	printOne( a[ 2 ] );
	printOne( a[ 3 ] );
	printArray( a, SIZE );
	doubleAllItems( a, SIZE );
	printArray( a, SIZE );

	int b[ SIZE ];   
	// how will C++ initialize each of these elements?

	printOne(  b[ 0 ] );
	printOne(  b[ 1 ] );
	changeOne( b[ 0 ] );
	printOne(  b[ 0 ] );


	return( 0 );
}


// pass-by-value
void printOne( int value )
{
	cout << "printOne printing " << value << endl;
}

// pass-by-reference
void changeOne( int& value )
{
	cout << "changeOne---> gimme a new value: ";
	cin  >> value;
}


// const-array parameter
void printArray( const int array[], int size )
{
	cout << "array: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[ i ] << " ";
	}
	cout << endl;
}

// array parameter
void doubleAllItems( int array[], int size )
{
	for (int i = 0; i < size; i++)
	{
		array[ i ] = array[ i ] * 2;
	}
}
