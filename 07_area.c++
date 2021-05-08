#include <iostream>
using namespace std;
int main(){
    double base, height, area;
    cout << "Insert the base of the triangle: ";
    cin >> base;

    cout << "Insert the height of the triangle: ";
    cin >> height;

    area = (base * height)/2;
    cout << "The area of the triangle is: " << area; 

    return 0;
}