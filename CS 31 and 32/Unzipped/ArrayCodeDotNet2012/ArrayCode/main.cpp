//
//  main.cpp
//  ArrayCode
//
//  Created by Howard Stahl on 1/12/16.
//  Copyright © 2016 Howard Stahl. All rights reserved.
//

#include <iostream>
using namespace std;


void fillUp( int a[ ], int size );
// the user will enter in size values which will wind up stored in the array a

int search( const int a[ ], int size, int target );
// returns the first index which holds the target; otherwise, -1




int main(int argc, const char * argv[]) {
    int i, score[5], max;
    
    cout << "Enter 5 scores:\n";
    cin >> score[ 0 ];
    max = score[ 0 ];
    
    for (i = 1; i < 5; i++)
    {
        cin >> score[ i ];
        if (score[ i ] > max)
            max = score[i];
        // max will be the largest of the values score[0], score[1], ... , score[5]
    }
    
    cout << "The highest score is " << max << endl;
    cout << "The scores and their differences from the highest are:\n";
    
    for (i = 0; i < 5; i++)
    {
        cout << score[ i ] << " off by " << (max - score[i]) << endl;
    }
    
    return 0;
}



void fillUp( int a[ ], int size )
{
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[ i ];
    }
    cout << "The last array index used is " << (size - 1) << endl;
}



int search( const int a[ ], int size, int target )
{
    int index = 0;
    bool found = false;
    while ((!found) && (index <= size))
    {
        if (target == a[index])
        {
            found = true;
        }
        else
        {
            index = index + 1;
        }
    }
    if (!found)
    {
        index = -1;
    }
    return( index );
}