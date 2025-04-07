#include<bits/stdc++.h>
using namespace std;

class BasicLock {
public:
    void Lock() {
        cout << "Open the lock" << endl;
    }

    void Un_Lock() {
        cout << "Close the lock" << endl;
    }
};

class SmartLock : public BasicLock { //  inheritance syntax
public:
    void Remote_unlock() {
        cout << "Can control using remote" << endl;
    }
};

int main() {
    SmartLock smartLock; // Create an object of SmartLock

    // Demonstrating functionality
    smartLock.Lock();
    smartLock.Un_Lock();
    smartLock.Remote_unlock();

    return 0;
}
