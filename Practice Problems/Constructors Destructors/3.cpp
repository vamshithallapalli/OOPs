#include <bits/stdc++.h>
using namespace std;

class myClass
{
    int a;

public:
    myClass(int x)
    {
        a = x;
        cout << "Constructor: " << a << endl;
    }
    int getValue()
    {
        return a;
    }
};
int main()
{
    myClass obj1(1);
    myClass obj2; //there is no default constructor
    obj1.getValue();  //Constructor: 1
    obj2.getValue();  //Error

    return 0;
}