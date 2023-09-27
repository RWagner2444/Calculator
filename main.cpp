#include <iostream>
using namespace std;

int main() {
    
    char op;
    double num1;
    double num2;
    double result;
    
    cout << "********** CALCULATOR **********\n";
    
    cout << "\nEnter either (+ - * /): \n";
    cin >> op;
    
    cout << "\nEnter #1: \n";
    cin >> num1;
    
    cout << "\nEnter #2: \n";
    cin >> num2;
    
    switch(op){
        case '+':
            result = num1 + num2;
            cout << "\nresult: " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            cout << "\nresult: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            cout << "\nresult: " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            cout << "\nresult: " << result << "\n";
            break;
        default:
            cout << "\nThat wasn't a valid response!\n";
    }
    
    cout << "\n********************************\n";
    
    return 0;
}
