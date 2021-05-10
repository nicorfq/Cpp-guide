#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n, c = 1, limit;
    cout << "Enter which table you want to show: ";
    cin >> n;
    cout << "Enter a limit: ";
    cin >> limit;
    
    while (c <= limit)
    {
        cout << n << " x " << setw(2) << c << " = " << n * c << endl;
        c++;
    }
    
    return 0;
}