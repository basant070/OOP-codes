#include <iostream>
using namespace std;

int main() {
    // ---------- Dynamic Memory Allocation (DMA) ----------
    
    // Step 1: Dynamically allocate memory for two integers using 'new'
    int* a = new int;
    int* b = new int;
    int* sum = new int;

    // Step 2: Take input and store values at the dynamically allocated addresses
    cout << "Enter first number: ";
    cin >> *a;

    cout << "Enter second number: ";
    cin >> *b;

    // Step 3: Perform addition using the dereferenced pointers
    *sum = *a + *b;

    // Step 4: Display the result
    cout << "\nSum of " << *a << " and " << *b << " = " << *sum << endl;

    // Step 5: Free the dynamically allocated memory
    delete a;
    delete b;
    delete sum;

    return 0;
}