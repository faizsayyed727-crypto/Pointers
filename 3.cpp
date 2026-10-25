//Double Pointer in C++
#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    cout << "Value of p: " << p << endl;         //Address of a
    cout << "Address of p: " << &p << endl;
    cout << "Value using *p: " << *p << endl;

    cout << "Value of q: " << q << endl;         //Address of p
    cout << "Address of q: " << &q << endl;      
    cout << "Value using *q: " << *q << endl;    //Address of a 
    cout << "Value using **q: " << **q << endl;

    return 0;
}
