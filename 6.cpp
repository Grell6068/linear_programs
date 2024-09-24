#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main() {
    float Z1, Z2; 
    float a;
    cout<<"Введііть а: ";
    cin>>a;
    Z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
    Z2 = 4 * cos(a / 2) * cos(5 / 2 * a) * cos(4 * a);
    cout<<"Z1: "<<Z1<<"\n";
    cout<<"Z2: "<<Z2;
    
    return 0;
}
