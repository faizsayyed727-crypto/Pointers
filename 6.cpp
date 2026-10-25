//Calculate GCD/HCF of Two NUmbers
#include <iostream>
using namespace std;
int min(int a , int b){
    if(a < b) return a;
    else return b;
}
int findGCD(int a,int b){
    int hcf , i;
    for(i = min(a,b) ; i >= 1 ;i--){
        if(a % i == 0 && b % i == 0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int gcd = findGCD(a, b);
    cout << "GCD = " << gcd << endl;
    return 0;
}