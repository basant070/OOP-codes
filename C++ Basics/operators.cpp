// All the operators in cpp

#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 5;
    bool x = true, y = false;

    // ---------- Arithmetic Operators ----------
    cout << "----- Arithmetic Operators -----\n";
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // ---------- Relational Operators ----------
    cout << "\n----- Relational Operators -----\n";
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    // ---------- Logical Operators ----------
    cout << "\n----- Logical Operators -----\n";
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;
    cout << "!x     : " << (!x) << endl;

    // ---------- Bitwise Operators ----------
    cout << "\n----- Bitwise Operators -----\n";
    cout << "a & b  : " << (a & b) << endl;
    cout << "a | b  : " << (a | b) << endl;
    cout << "a ^ b  : " << (a ^ b) << endl;
    cout << "~a     : " << (~a) << endl;
    cout << "a << 2 : " << (a << 2) << endl;
    cout << "a >> 2 : " << (a >> 2) << endl;

    // ---------- Assignment Operators ----------
    cout << "\n----- Assignment Operators -----\n";
    int c = a;
    cout << "c = a       -> c = " << c << endl;
    c += b; cout << "c += b      -> c = " << c << endl;
    c -= b; cout << "c -= b      -> c = " << c << endl;
    c *= b; cout << "c *= b      -> c = " << c << endl;
    c /= b; cout << "c /= b      -> c = " << c << endl;
    c %= b; cout << "c %= b      -> c = " << c << endl;
    c <<= 1; cout << "c <<= 1     -> c = " << c << endl;
    c >>= 1; cout << "c >>= 1     -> c = " << c << endl;
    c &= b; cout << "c &= b      -> c = " << c << endl;
    c |= b; cout << "c |= b      -> c = " << c << endl;
    c ^= b; cout << "c ^= b      -> c = " << c << endl;

    // ---------- Increment / Decrement Operators ----------
    cout << "\n----- Increment / Decrement Operators -----\n";
    int i = 5;
    cout << "i++ : " << (i++) << " (i is now " << i << ")" << endl;
    cout << "++i : " << (++i) << endl;
    cout << "i-- : " << (i--) << " (i is now " << i << ")" << endl;
    cout << "--i : " << (--i) << endl;

    // ---------- Conditional (Ternary) Operator ----------
    cout << "\n----- Ternary Operator -----\n";
    int max = (a > b) ? a : b;
    cout << "max(a, b) = " << max << endl;

    // ---------- Comma Operator ----------
    cout << "\n----- Comma Operator -----\n";
    int p = (a, b); // evaluates a, discards it, then assigns b
    cout << "int p = (a, b) -> p = " << p << endl;

    // ---------- sizeof Operator ----------
    cout << "\n----- sizeof Operator -----\n";
    cout << "sizeof(a) = " << sizeof(a) << " bytes" << endl;
    cout << "sizeof(double) = " << sizeof(double) << " bytes" << endl;

    // ---------- Pointer & Address-of / Dereference Operators ----------
    cout << "\n----- Pointer Operators (&, *) -----\n";
    int var = 100;
    int* ptr = &var;
    cout << "Address of var (&var) : " << &var << endl;
    cout << "Value via pointer (*ptr) : " << *ptr << endl;

    // ---------- Scope Resolution Operator ----------
    cout << "\n----- Scope Resolution Operator (::) -----\n";
    cout << "Using ::std explicitly not needed since 'using namespace std' is active\n";

    // ---------- new / delete Operators ----------
    cout << "\n----- new / delete Operators -----\n";
    int* dynInt = new int(42);
    cout << "Dynamically allocated value: " << *dynInt << endl;
    delete dynInt;

    return 0;
}