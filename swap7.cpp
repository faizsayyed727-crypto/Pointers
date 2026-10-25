//SWAP Two Numbers (Using Pointers and Functions)
#include <iostream>
using namespace std;
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a, b;
    cin >> a >> b;
    
    swapNumbers(&a, &b);
    cout << a << " " << b;
    return 0;
}