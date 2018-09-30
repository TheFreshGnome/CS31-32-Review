//
//  main.cpp
//  IOExample
//
//  Created by Howard Stahl on 12/28/15.
//  Copyright © 2015 Howard Stahl. All rights reserved.
//

#include <iostream>
#include <string>


using namespace std;

int main( ) {
    string dogName;
    string dogBreed;
    int actualAge;
    int humanAge;
    
    cout << "How many years old is your dog?" << endl;
    cin  >> actualAge;
    humanAge = actualAge * 7;
    
    cout << "What is your dog's name?" << endl;
    // cin >> dogName;
    cin.ignore( INT_MAX, '\n' );
    getline( cin, dogName );
    
    cout << "What is your dog's breed?" << endl;
    // cin >> dogBreed;
    getline( cin, dogBreed );
    
    cout << "The " << dogBreed << " named ";
    cout << dogName << "'s age is approximately ";
    cout << "equivalent to a " << humanAge;
    cout << " year old human." << endl;
    
    return 0;
}
