#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    friend void modify_a(A obj);

    public:
    A(){
        a=5;
    }

    void get(){
        cout<<a<<endl;
    }
};

void modify_a(A obj){ //here obj is passed by value
    obj.a += 15;
}
int main(){
    A obj1;
    obj1.get();  //5
    modify_a(obj1);
    obj1.get();  //5 since 

return 0;
}