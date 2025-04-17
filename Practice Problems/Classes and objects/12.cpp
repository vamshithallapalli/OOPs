#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    static int a;
    int get(A obj){
        return (a+obj.a);
    }
};
int A::a=10;
int main(){
    A obj;
    int *ptr;
    ptr = &obj.a;  // *ptr = obj.a
    *ptr *= 2;
    cout<<obj.get(obj)<<endl; //40

return 0;
}