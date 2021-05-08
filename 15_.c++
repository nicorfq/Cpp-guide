#include <iostream>
using namespace std;
int main(){
    int i, num, factorial =1;
    cout << "Insert number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    cout << "The factorial of " <<num<< " is: " <<factorial;
    
    return 0;
}