#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a, b;
    int getSum()
    {
        return (a + b);
    }
};
int main()
{
    A obj1; // object declaration
    obj1.a = 3;
    obj1.b = 7;
    A *ptr;
    ptr = &obj1; // here *(ptr) = obj1
    ptr->a = 5; // here ptr->a == obj1.a
    cout << obj1.getSum() << endl;  //12

    return 0;
}