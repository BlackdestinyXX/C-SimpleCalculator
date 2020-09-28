#include <iostream>
using namespace std;

int main() {
    double number1;
    double number2;
    cout << "Welcome to calculator!" << endl;
    cout << "For start, insert first number: " << endl;
    cin >> number1;
    cout << "Now insert the second number: " << endl;
    cin >> number2;
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
    cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
}