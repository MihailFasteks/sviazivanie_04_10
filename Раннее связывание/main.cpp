//
//  main.cpp
//  Раннее связывание
//
//  Created by Michalis on 04.10.2023.
//

#include <iostream>
#include <string.h>
#include "Transport.hpp"
#include "Tram.hpp"
#include "Bike.hpp"
#include "Plain.hpp"
#include "Ship.hpp"
#include "Car.hpp"
using namespace std;

int main() {
  
    Transport* ptr=nullptr;
    int v;
    cout<<"MENU:"<<endl;
    cout<<"1. Tram"<<endl;
    cout<<"2. Bike"<<endl;
    cout<<"3. Plain"<<endl;
    cout<<"4. Ship"<<endl;
    cout<<"5. Car"<<endl;
    cout<<"Input your choice: ";
    cin>>v;
    
    switch (v)
    {
        case 1:
            ptr=new Tram();
            break;
        case 2:
            ptr=new Bike();
            break;
        case 3:
            ptr=new Plain();
            break;
        case 4:
            ptr=new Ship();
            break;
        case 5:
            ptr=new Car();
            break;
        default:
            cout<<"ERROR!";
    }
    ptr->SetNPas(10);
    ptr->SetV(2);
    ptr->SetTPrice(10000);
    ptr->SetPType("E95");
    string PT=ptr->GetPType();
    cout<<PT;
    cout<<endl;
    ptr->show();
    ptr->showTrans();
    return 0;
}
