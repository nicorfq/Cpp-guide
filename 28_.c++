#include <iostream>
using namespace std;
int main(){
    
    int array[8];
    for (int i = 0; i < 8; i++)
    {
        cout <<"Position: "<< i << " : ";
        cin >> array[i];
    }
    cout << "Content of my array:\n";
    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << " ";
    }
       
    return 0;
}