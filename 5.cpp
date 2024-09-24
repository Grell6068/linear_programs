#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float a;
    cout<<"Введііть а: ";
    cin>>a;
    Z1 = 1 - 1 / 4 * (sin(2*a) + cos(2*a));
    Z2 = pow(cos(a), 2) + pow(cos(a), 4);
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
