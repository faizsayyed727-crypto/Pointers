//Pointers in C++
#include <iostream>
using namespace std;
int main() {
    int x = 4;
    int *p = &x;
    cout << x << endl;      //value of x
    cout << &x << endl;     //address of x
    cout << p << endl;      //address of x
    cout << &p << endl;     //address of p
    //Dereference Pointer -->
    cout << *p << endl;     //value of x
    return 0;
}