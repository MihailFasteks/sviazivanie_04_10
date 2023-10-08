//
//  Transport.hpp
//  Раннее связывание
//
//  Created by Michalis on 04.10.2023.
//

//#ifndef Transport_hpp
//#define Transport_hpp

#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;
//#include <string.h>

#pragma once

//#endif /* Transport_hpp */
class Transport
{
protected:
    int nPas;
    int V;
    string petrolType;
    int tranPrice;
public:
    Transport();
    ~Transport();
    Transport(int n, int v, string pT, int tP);
    void SetNPas(int n);
    void SetV(int v);
    void SetTPrice(int tP);
    void SetPType(string pT);
    
    int GetNPas() const;
    int GetV()const;
    int GetTPrice()const;
    string GetPType()const;
    
    void show() const;
    virtual void showTrans() const;
    
};
