#include<bits/stdc++.h>
using namespace std;

class myClass{
    public:
    int a, b;
    char ch;

    myClass(){
        a=0, b=0, ch='a';
    }

    myClass(char c){
        ch = c;
    }

    myClass(int x, int y){
         a=x;
         b=y;
    }

    void get(){
        cout<<a<<" "<<b<<" "<<ch<<endl;
    }
};
int main(){
    myClass obj1, obj2('z'), obj3(4, 8);
    obj1.get(); // 0 0 a
    obj2.get(); // garbage garbage z
    obj3.get(); // 4 8 garbage

return 0;
}