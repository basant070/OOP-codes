#include <iostream>
using namespace std;

int main() {
    // ---------- Primitive / Fundamental Data Types ----------
    cout << "=================== Primitive Data Types =======================================\n";

    int myInt = 25;
    cout << "int myInt = " << myInt << "  (size: " << sizeof(myInt) << " bytes)" << endl;

    short myShort = 100;
    cout << "short myShort = " << myShort << "  (size: " << sizeof(myShort) << " bytes)" << endl;

    long myLong = 100000L;
    cout << "long myLong = " << myLong << "  (size: " << sizeof(myLong) << " bytes)" << endl;

    long long myLongLong = 10000000000LL;
    cout << "long long myLongLong = " << myLongLong << "  (size: " << sizeof(myLongLong) << " bytes)" << endl;

    unsigned int myUnsignedInt = 4000000000U;
    cout << "unsigned int myUnsignedInt = " << myUnsignedInt << "  (size: " << sizeof(myUnsignedInt) << " bytes)" << endl;

    float myFloat = 3.14f;
    cout << "float myFloat = " << myFloat << "  (size: " << sizeof(myFloat) << " bytes)" << endl;

    double myDouble = 3.14159265358979;
    cout << "double myDouble = " << myDouble << "  (size: " << sizeof(myDouble) << " bytes)" << endl;

    long double myLongDouble = 3.14159265358979L;
    cout << "long double myLongDouble = " << myLongDouble << "  (size: " << sizeof(myLongDouble) << " bytes)" << endl;

    char myChar = 'A';
    cout << "char myChar = " << myChar << "  (size: " << sizeof(myChar) << " bytes)" << endl;

    unsigned char myUChar = 250;
    cout << "unsigned char myUChar = " << (int)myUChar << "  (size: " << sizeof(myUChar) << " bytes)" << endl;

    wchar_t myWChar = L'B';
    wcout << L"wchar_t myWChar = " << myWChar << L"  (size: " << sizeof(myWChar) << L" bytes)" << endl;

    bool myBool = true;
    cout << "bool myBool = " << myBool << "  (size: " << sizeof(myBool) << " bytes)" << endl;\


    // ---------- Derived Data Types ----------
    cout << "\n========================== Derived Data Types ========================\n";

    int arr[5] = {1, 2, 3, 4, 5};  //Array 
    cout << "int arr[5] = ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    int* ptr = &myInt;  // pointer 
    cout << "int* ptr -> points to myInt, value = " << *ptr << endl;

    int& ref = myInt;    // reference 
    cout << "int& ref -> reference to myInt, value = " << ref << endl;

    void (*funcPtr)(); // function pointer declaration (not called here)
    cout << "void (*funcPtr)() declared -> size: " << sizeof(funcPtr) << " bytes" << endl;

    

    // ---------- User-Defined Data Types ----------
    cout << "\n======================= User-Defined Data Types =========================\n";

    struct Student {     // Structure 
        int roll;
        string name;
    };
    Student s1 = {1, "Alice"};
    cout << "struct Student -> roll: " << s1.roll << ", name: " << s1.name << endl;

    union Data {      // union 
        int i;
        float f;
    };
    Data d;
    d.i = 65;
    cout << "union Data -> i: " << d.i << endl;

    enum Color { RED, GREEN, BLUE };   // enumerator 
    Color c = GREEN;
    cout << "enum Color -> GREEN = " << c << endl;

    class Point {     //class 
    public:
        int x, y;
        Point(int a, int b) : x(a), y(b) {}
    };
    Point p1(3, 4);
    cout << "class Point -> x: " << p1.x << ", y: " << p1.y << endl;   

    return 0;
}