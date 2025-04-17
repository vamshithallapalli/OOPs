#include <bits/stdc++.h>
using namespace std;
// When the scope ends the constructors will die, and
// destructors will call in reverse order of constructor called

//static means obj is created only ONCE and persists throughout the entire program execution.
//Even if myFun(4) and myFun(5) are called multiple times, the constructor executes only once, the first time myFun() is invoked.
//The destructor does not execute immediately after function execution—it is delayed until the program terminates.
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
   static myClass obj(x);
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
    // Destructor: 3
    // Destructor: 2
    // Destructor: 1
    // Destructor: 4

    return 0;
}