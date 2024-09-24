#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float a;
    cout<<"Введііть а: ";
    cin>>a;
    Z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 * a), 2));
    Z2 = 2 * sin(a);
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
