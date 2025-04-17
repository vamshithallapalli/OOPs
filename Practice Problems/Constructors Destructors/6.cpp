#include <bits/stdc++.h>
using namespace std;
// When the scope ends the constructors will die, and
// destructors will call in reverse order of constructor called

// Every time myFun(x) is called, a new object (obj) is created.
// Since obj is a local variable, it gets destroyed immediately after the function ends.
// The destructor executes immediately after each function call.
// Objects created in main() follow normal stack-based destruction order.
class myClass
{
    int a;

public:
    myClass(int x)
    {
        a = x;
        cout << "Constructor: " << a << endl;
    }
    ~myClass()
    {
        cout << "Destructor: " << a << endl;
    }
};
void myFun(int x)
{
    myClass obj(x);
}
int main()
{
    myClass obj1(1), obj2(2), obj3(3);
    myFun(4);
    myFun(5);
    // Constructor: 1
    // Constructor: 2
    // Constructor: 3
    // Constructor: 4
    // Destructor: 4
    // Constructor: 5
    // Destructor: 5
    // Destructor: 3
    // Destructor: 2
    // Destructor: 1

    return 0;
}