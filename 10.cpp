#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float a;
    cout<<"Введііть a: ";
    cin>>a;
    Z1 = sin(PI / 2 + 3 * a) / (1 - sin(3 * a - PI));
    Z2 = tan(5 * PI / 4 + 3 * a / 2);
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
