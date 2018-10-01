
//A Tesle Model 3 

#include "TeslaModel3.h"

namespace cs31{

    TeslaModel3::TeslaModel3( std::string color, double price )
    : Tesla( "Model 3", color, price )
    {
        
    }

    void TeslaModel3::vroom(){
			printf("%s \n", "VROOOOOOOM");
	}

    void TeslaModel3::drive()
    {
        std::cout << "an electric powered tesla zooming around town..." << std::endl;
    }
}