#include <iostream>
using namespace std;
int main(){
    
    int num, sum = 0;
    while (true)
    {
        cout << "Insert number: ";
        cin >> num;

        if (num < 0)
        {
            break;
        }
        sum += num;
    }

    cout << "The sum is: " << sum;
    
    return 0;
}