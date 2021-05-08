#include <iostream>
using namespace std;
int main(){
    int hours, minutes;
    double total;
    
    cout << "Insert the hour: ";
    cin >>  hours;
    cout << "Insert the minutes: ";
    cin >> minutes;

    if(minutes > 0)
    {
        hours++;   // hours = hours + 1;
    }

    total = hours * 3.50;
    cout << " The total to pay is: " <<total;

    return 0;
}