#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Insert number: ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "The number is even: " << num;
    }
    else{
        cout << "The number is odd: " << num;
    }
    
    return 0;
}