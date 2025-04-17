#include<bits/stdc++.h>
using namespace std;
class A{  //be default every member of a class is private
    public:
    int a; 
    void modify_a(int x){
        a=x;
    }
};
int main(){
    A a; //object declaration
    a.modify_a(10);
    cout<<a.a<<endl; //10

return 0;
}