

#ifndef CHEVY_H
#define CHEVY_H
#include <string>
#include "Car.h"

namespace cs31
{
    

	class Chevy : public Car
	{
	public:
	    Chevy( std::string make, std::string color, double price );
	    
	    virtual void drive( );
	private:
	    
	};

}

#endif
