//Method Overloading (Compile-Time): Define multiple methods in the same class with same name
//but different parameters

//Method Overloading
#include<bits/stdc++.h>
using namespace std;

class Drone{
    public:
    void take_off(int height){
       cout<<"taking off to a height: "<<height<<endl;
    }

    void take_off(int height, int speed){
       cout<<"taking off to a height: "<<height<<", with speed: "<<speed<<endl;
    }
};
int main(){

    Drone drone;
    drone.take_off(50); //call the first method
    drone.take_off(50, 100); //call the overload method

return 0;
}