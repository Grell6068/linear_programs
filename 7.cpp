#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float a;
    cout<<"Введііть а: ";
    cin>>a;
    Z1 = pow(cos((3 / 8) * PI - a / 4), 2) - pow(cos((11 / 8) * PI + a / 4), 2);
    Z2 = (sqrt(2) / 2) * sin(a / 2);
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
