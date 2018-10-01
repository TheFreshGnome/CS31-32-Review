


#include "Chevy.h"
#include <iostream>

namespace cs31
{
   
	Chevy::Chevy( std::string make, std::string color, double price )
	: Car( "Chevy", make, color, price ){
		
	}
	        

	void Chevy::drive( )
	{
	    using namespace std;
	    cout << "an electric powered tesla zooming around town..." << endl;
	}

}