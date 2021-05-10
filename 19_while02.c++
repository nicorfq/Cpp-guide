#include <iostream>
using namespace std;
int main(){
    int num;
    int sum = 0;
    cout << "Insert number: ";
    cin >> num;

    while (num >= 0)
    {
        sum += num;
        cout << "Insert more numbers: ";
        cin >> num;
    }

    cout << "The sum is: "<< sum;
    
    return 0;
}