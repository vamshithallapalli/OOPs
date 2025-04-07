#include <bits/stdc++.h>
using namespace std;

class MyClass{
public: //access specifier
    int num; //data member
    string str;

    void display() //method
    {
        cout << "Hello world!" << endl;
    }
};
int main()
{
    
    MyClass myObj; //object creation

    myObj.num = 10;
    myObj.str = "vamshi";
    myObj.display(); //calling the method

    cout << myObj.num << " " << myObj.str << endl;

    return 0;
}