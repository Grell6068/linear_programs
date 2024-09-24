#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float a;
    cout<<"Введііть a: ";
    cin>>a;
    Z1 = (1 - 2 * pow(sin(a), 2)) / (1 + sin(2 * a));
    Z2 = (1 - tan(a)) / (1 + tan(a));
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
