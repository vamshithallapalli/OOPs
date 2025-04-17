#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;

public:
    A()
    {
        a = 5;
    }

    friend void modify();
};

void modify()
{
    A obj;
    cout << "Private member of class A, " << obj.a << endl;
}
int main()
{
    A obj;
    modify();
    return 0;
}