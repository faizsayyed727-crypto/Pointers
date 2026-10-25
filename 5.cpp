//first and last digit of a number using pointers
#include <iostream>
using namespace std;
int main() {
    int n, first, last;
    int *p = &n;
    cout << "Enter a number: ";
    cin >> n;

    // Last digit using pointer
    last = *p % 10;
    // First digit using pointer
    while (*p >= 10) {
        *p = *p / 10;
    }
    first = *p;

    cout << "First digit = " << first << endl;
    cout << "Last digit = " << last << endl;
    return 0;
}