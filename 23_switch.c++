#include <iostream>
using namespace std;
int main(){
    char oper;
    int num1, num2;

    cout << "Insert a operator:\n--> +  -  *  /" <<endl;
    cin >> oper;

    cout << "Insert two numbers: "<<endl;
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << " + "<< num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - "<< num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * "<< num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / "<< num2 << " = " << num1 / num2;
        break;
    
    default:
    cout <<"Error, incorret operator...";
        break;
    }

    
    
    return 0;
}