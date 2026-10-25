//Pointers Arithmetic in C++.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Pointer points to first element of Array
    int *p = arr;

    // 1. Increment (p++) --> Moves pointer to next element.
    cout << "1. Increment (p++): " << endl;
    cout << "Before: " << *p << endl;  // 10
    p++;
    cout << "After: " << *p << endl;   // 20

    // 2. Decrement (p--) --> Moves pointer to previous element.
    cout << "\n2. Decrement (p--): " << endl;
    p--;
    cout << "After decrement: " << *p << endl;  // 10

    // 3. Add n to pointer (p + n) --> Moves pointer forward by n elements
    cout << "\n3. Pointer addition (p + 2): " << endl;
    cout << *(p + 2) << endl;  // 30
    cout << *(p + 4) << endl;  // 50

    // 4. Subtract n from pointer (p - n) --> Moves pointer backward by n elements
    int *q = &arr[4];  // Points to 50
    cout << "\n4. Pointer subtraction (q - 2): " << endl;
    cout << *(q - 2) << endl;  // 30
    cout << *(q - 4) << endl;  // 10

    // 5. Subtracting two pointers --> Gives distance between elements in an array
    int *p1 = &arr[1];  // Points to 20
    int *p2 = &arr[4];  // Points to 50
    cout << "\n5. Difference between two pointers: " << endl;
    cout << p2 - p1 << " Elements. ";  // 3 elements
    return 0;
}