#ifndef TESLAMODEL3_H
#define TESLAMODEL3_H
#include <string>
#include "Tesla.h"

namespace cs31{

class TeslaModel3 : public Tesla{
	public:
		TeslaModel3( std::string color, double price );

		void vroom();

    	virtual void drive( );
    };
}

#endif