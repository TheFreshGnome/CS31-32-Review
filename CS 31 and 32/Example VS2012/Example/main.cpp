//
//  main.cpp
//  Example
//
//  Created by Howard Stahl on 3/2/16.
//  Copyright © 2016 Howard Stahl. All rights reserved.
//

#include <iostream>
#include "Car.h"
#include "Suburu.h"
#include "SuburuImpreza.h"
#include "RedSuburuImpreza.h"

int main(int argc, const char * argv[]) {
    using namespace cs31;
    
    Car c( "Chevy", "Volt", "black", 32500 );
    Suburu s( "Forester", "blue", 24500 );
    SuburuImpreza i( "gold", 23200 );
    RedSuburuImpreza r( 31700 );
    
    return 0;
}
