#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float a;
    cout<<"Введііть а: ";
    cin>>a;
    Z1 = 2 * pow(sin(3 * PI - 2 * a), 2) * pow(cos(5 * PI + 2 * a), 2);
    Z2 = 1 / 4 - (1 / 4) * sin(5 / 2 * PI * 8 * a);
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
