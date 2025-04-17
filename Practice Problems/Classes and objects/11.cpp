#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    static int a;
    static void increment(){
        a += 3;
    }
    int get(A obj){
        return (a+obj.a);  //precedence of . > +
    }
};
int A::a=10;
int main(){
    A obj1, obj2;
    obj1.increment();
    obj2.increment();
    cout<<obj2.get(obj1)<<endl; //32

return 0;
}