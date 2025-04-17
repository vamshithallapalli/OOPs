#include <bits/stdc++.h>
using namespace std;
// When the scope ends the constructors will die, and
// destructors will call in reverse order of constructor called
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
int main()
{
    myClass obj1(1), obj2(2), obj3(3);
    // Constructor: 1
    // Constructor: 2
    // Constructor: 3
    // Destructor: 3
    // Destructor: 2
    // Destructor: 1

    return 0;
}