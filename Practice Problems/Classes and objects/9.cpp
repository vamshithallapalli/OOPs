#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    static int a;
    void increment(){
        a++;
    }

    int get(){
        return a;
    }
};
int A::a = 10;
int main(){
    A obj1, obj2, obj3;
    obj1.increment();
    obj2.increment();
    obj3.increment();
    cout<<obj1.get()<<" "<<obj2.get()<<" "<<obj3.get()<<endl; // 13 13 13

return 0;
}