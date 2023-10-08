//
//  Car.hpp
//  Раннее связывание
//
//  Created by Michalis on 04.10.2023.
//

//#ifndef Car_hpp
//#define Car_hpp

#include <stdio.h>
#include "Transport.hpp"

#pragma once

//#endif /* Car_hpp */
class Car: public Transport
{
public:
    virtual void showTrans() const;
};
