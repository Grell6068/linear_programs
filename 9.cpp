#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float a, b;
    cout<<"Введііть a: ";
    cin>>a;
    cout<<"Введііть b: ";
    cin>>b;
    Z1 = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b), 2);
    Z2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
