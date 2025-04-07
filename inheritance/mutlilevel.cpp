#include <iostream>
using namespace std;

class University {
public:
    void conduct_exams() {
        cout << "University conducts exams." << endl;
    }
};

class Departments : public University {
public:
    void organize_classes() {
        cout << "Departments organize the classes." << endl;
    }
};

class Professors : public Departments { 
public:
    void teach() {
        cout << "Professors teach the classes." << endl;
    }
};

int main() {
    Professors professor;

    // Accessing methods from all levels of inheritance
    professor.conduct_exams();   // Inherited from University
    professor.organize_classes(); // Inherited from Departments
    professor.teach();          // Defined in Professors

    return 0;
}
