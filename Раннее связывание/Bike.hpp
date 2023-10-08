//
//  Bike.hpp
//  Раннее связывание
//
//  Created by Michalis on 04.10.2023.
//

//#ifndef Bike_hpp
//#define Bike_hpp

#include <stdio.h>
#include "Transport.hpp"

#pragma once

//#endif /* Bike_hpp */
class Bike: public Transport
{
    
    
public:
    virtual void showTrans() const;
};
