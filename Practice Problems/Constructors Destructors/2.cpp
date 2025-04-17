#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    A(){
        cout<<"Default constructor"<<endl;
    }

    public:
    int a;
    A(int a){
        this->a = a; //(*this).a = a
    }
};
int main(){
    A a(10); //it will search for parameterized constructor
    cout<<a.a<<endl;   //print 10
    

return 0;
}