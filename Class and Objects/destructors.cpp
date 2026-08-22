#include <iostream>
using namespace std;

class Demo {
    string name;
public:
    // Constructor
    Demo(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Start of main" << endl;

    {
        Demo obj1("Object A"); // created here
        cout << "Inside inner block" << endl;
    } // obj1 destroyed here, when it goes out of scope

    cout << "Back in main, before creating Object B" << endl;

    Demo obj2("Object B"); // created here
    cout << "End of main" << endl;

    return 0;
} // obj2 destroyed here, when main() ends