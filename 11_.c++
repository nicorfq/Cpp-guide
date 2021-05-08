#include <iostream>
using namespace std;
int main(){
    int num;

    cout << "Insert number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The number is positive";
    }

    else if(num == 0){
        cout << "T he number is 0";
    }

    else
    {
        cout << "The number is negative";
    }
    
    return 0;
}