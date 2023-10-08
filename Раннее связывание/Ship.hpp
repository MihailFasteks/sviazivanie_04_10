//
//  Ship.hpp
//  Раннее связывание
//
//  Created by Michalis on 04.10.2023.
//

//#ifndef Ship_hpp
//#define Ship_hpp

#include <stdio.h>
#include "Transport.hpp"

#pragma once

//#endif /* Ship_hpp */
class Ship: public Transport
{
    
    
public:
    virtual void showTrans() const;
};
