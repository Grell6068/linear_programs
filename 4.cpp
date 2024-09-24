#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float a;
    cout<<"Введііть а: ";
    cin>>a;
    Z1 = sin(2*a) + sin(5*a) - sin(3*a) / (cos(a) - cos(3*a) + cos(5*a));
    Z2 = tan(3*a);
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
