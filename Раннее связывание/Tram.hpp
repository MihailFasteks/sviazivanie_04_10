//
//  Tram.hpp
//  Раннее связывание
//
//  Created by Michalis on 04.10.2023.
//

//#ifndef Tram_hpp
//#define Tram_hpp
#pragma once

#include "Transport.hpp"

#include <stdio.h>


//#endif /* Tram_hpp */
class Tram: public Transport
{
    
    
public:
    virtual void showTrans() const;
};
