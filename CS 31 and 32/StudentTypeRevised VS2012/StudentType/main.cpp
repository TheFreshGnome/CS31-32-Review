//
//  main.cpp
//  StudentType
//
//  Created by Howard Stahl on 1/13/16.
//  Copyright © 2016 Howard Stahl. All rights reserved.
//

#include <iostream>
#include <string>
#include <climits>
using namespace std;

void checkLevel( string level, string matchedLevel );

int main( ) {
    const int FRESHMAN_UNITS_REQUIRED  = 0;    // folks with 0 or more quarter units are Freshmen
    const int SOPHOMORE_UNITS_REQUIRED = 46;   // folks with 46 or more quarter units are Sophomores
    const int JUNIOR_UNITS_REQUIRED    = 91;   // folks with 91 or more quarter units are Juniors
    const int SENIOR_UNITS_REQUIRED    = 121;  // folks wiht 121 or more quarter units are Seniors
    
    const string FRESHMAN  = "freshman";
    const string SOPHOMORE = "sophomore";
    const string JUNIOR    = "junior";
    const string SENIOR    = "senior";
    
    string name;
    int    units;
    string level;
    
    cout << "Tell me your name:";
    getline( cin, name );
    cout << "Tell me how many units you have attained:";
    cin  >> units;
    cin.ignore( INT_MAX, '\n' );
    cout << "Tell me what you think you are:";
    getline( cin, level );
    
    
    if (units < FRESHMAN_UNITS_REQUIRED)
    {
        cout << "You have not enrolled yet..." << endl;
    }
    else if (units < SOPHOMORE_UNITS_REQUIRED)
    {
	checkLevel( level, FRESHMAN );
    }
    else if (units < JUNIOR_UNITS_REQUIRED)
    {
	checkLevel( level, SOPHOMORE );
    }
    else if (units < SENIOR_UNITS_REQUIRED)
    {
	checkLevel( level, JUNIOR );
    }
    else
    {
	checkLevel( level, SENIOR );
    }
    
    return 0;
}

void checkLevel( string level, string matchedLevel )
{
    if (level == matchedLevel)
    {
	cout << "Yes, I agree you are a " << level << "!" << endl;
    }
    else
    {
	cout << "No, I don't think you are a " << level << endl;
    }
}

