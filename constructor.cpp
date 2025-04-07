#include<bits/stdc++.h>
using namespace std;

class VendingMachine{
    public:

    //default constructor
    VendingMachine(){
        cout<<"Hello world!"<<endl;
    }
    
    //parameterised constructor
    VendingMachine(int price, string item){
        cout<<item<<" costs "<<price<<endl;
    }
};
int main(){
  VendingMachine obj;
  VendingMachine sweet(30, "eggpuff");
return 0;
}