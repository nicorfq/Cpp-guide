#include <iostream>
using namespace std;
int main(){

    int num, i = 0;
    cout << "Insert number: ";
    cin >> num;
    do
    {
        num = num / 10;
        i++;
    } while (num != 0);

    cout << "The number of digits is: " << i <<endl;
    
    return 0;
}