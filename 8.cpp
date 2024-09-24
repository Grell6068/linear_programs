#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float x, y;
    cout<<"Введііть x: ";
    cin>>x;
    cout<<"Введііть y: ";
    cin>>y;
    Z1 = pow(cos(x), 2) + pow(sin(y), 2) + (1 / 4) * pow(sin(2 * x), 2) - 1;
    Z2 = sin(y + x) * sin(y - x);
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
