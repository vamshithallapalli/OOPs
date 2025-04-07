//Method Overriding (Run-Time): When a subclass(child) redefines a method
//from its superclass(parent) with same signature

//Method Overriding

#include<bits/stdc++.h>
using namespace std;

class ElectricAppliance{
    public:
    void turn_on(){
        cout<<"turning on appliance"<<endl;
    }
};

class SmartLight : public ElectricAppliance{
    public:
    void turn_on(){
        cout<<"turning on appliance using smartLight"<<endl;
    }
};
int main(){

    ElectricAppliance appliance;
    appliance.turn_on();

    SmartLight smart_light;
    smart_light.turn_on();

return 0;
}