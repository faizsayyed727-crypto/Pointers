//Calculate GCD using pointers
#include <iostream>
using namespace std;
int findGCD(int *p, int *q) {
    while (*q != 0) {
        int rem = *p % *q;
        *p = *q;
        *q = rem;
    }
    return *p;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int gcd = findGCD(&a, &b);
    cout << "GCD = " << gcd << endl;
    return 0;
}