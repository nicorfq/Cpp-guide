#include <iostream>
using namespace std;
int main(){
    int num, i = 0;
    cout <<"Insert number: ";
    cin >> num;

    for (int x = 1; x <= num; x++)
    {
        if(num % x == 0)
        {
            i++;
        }
    }
    if ( i == 2)
    {
        cout << "It's a prime number";
    }
    else{
        cout << "It's not a prime number";
    }
    
    return 0;
}