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
#include "Tesla.h"

int main(int argc, const char * argv[]) {
    using namespace cs31;
    
//  Car c( "Chevy", "Volt", "black", 32500 );
//  c.drive();
    Suburu s( "Forester", "blue", 24500 );
    s.drive();
    SuburuImpreza i( "gold", 23200 );
    i.drive();
    RedSuburuImpreza r( 31700 );
    r.drive();
    Tesla t( "Model S", "brown", 75000 );
    t.drive();
    
    Car * ptrCar = &t;
    ptrCar->drive( );
    
    ptrCar = &s;
    ptrCar->drive( );
    
    return 0;
}
