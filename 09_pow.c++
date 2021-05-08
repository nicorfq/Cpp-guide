#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int radio, volume;
    const double PI = 3.14159;

    cout << "Insert the radio: ";
    cin >> radio;

    volume = (4 * PI * pow(radio,3))/3;
    cout << "The volume is: " << volume;

    return 0;
}