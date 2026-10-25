// Swap Two Numbers (using Addition and Subtraction)
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int temp;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}