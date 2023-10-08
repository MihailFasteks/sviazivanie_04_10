//
//  Transport.cpp
//  Раннее связывание
//
//  Created by Michalis on 04.10.2023.
//

#include "Transport.hpp"
#include <iostream>
//#include <string>

using namespace std;
Transport::Transport()
{
    nPas=0;
    V=0;
    petrolType="NULL";
    tranPrice=0;
}
Transport::~Transport()
{
    
}

Transport::Transport(int n, int v, string pT, int tP)
{
    nPas=n;
    V=v;
    tranPrice=tP;
    petrolType=pT;
}
    void Transport::SetNPas(int n)
    {
        nPas=n;
    }
    void Transport::SetV(int v)
    {
        V=v;
    }
    void Transport::SetTPrice(int tP)
    {
        tranPrice=tP;
    }
    void Transport::SetPType(string pT)
{
        petrolType=pT;

    }
int Transport::GetNPas() const
{
    return nPas;
}
int Transport::GetV()const
{
    return V;
}
int Transport::GetTPrice()const
{
    return tranPrice;
}
string Transport::GetPType()const
{
    return petrolType;
}
void Transport::show() const
{
    cout<<"N passangers: "<<nPas<<endl;
    cout<<"Count of transport: "<<V<<endl;
    cout<<"Price for 1 piece of transport: "<<tranPrice<<endl;
    cout<<"Type of petrol: "<<petrolType<<endl;
}
    void Transport::showTrans() const
    {
        cout<<"Transport is undefined!"<<endl;
    }




