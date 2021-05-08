#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    double prom;

    cout << "Enter exam points: ";
    cin >> num1;

    cout << "Enter exam points: ";
    cin >> num2;

    cout << "Enter exam points: ";
    cin >> num3;

    prom = (num1 + num2 + num3)/3;
    cout << "The prom is: " <<prom;

    return 0;
}