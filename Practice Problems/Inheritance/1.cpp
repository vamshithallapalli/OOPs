#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"A"<<endl;
    }
};

class B: public A{
    public:
    B(){
        cout<<"B"<<endl;
    }
};
int main(){
    B obj; 
    //A
    //B

return 0;
}