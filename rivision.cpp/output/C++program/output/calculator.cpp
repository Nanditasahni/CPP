#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    //ready the front to take input from the user;
    cout << "Simple Calculator\n";
    cout << "----+----+----+---\n";
    cout << "Enter first number: ";
    cin >> num1;
    //here we take the input of operater from the user;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    //here we take input of second number from the user ;
    cout << "Enter second number: ";
    cin >> num2;
    //by using switch we performe the operation;
    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
    }
    return 0;

}