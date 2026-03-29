//yes, im heavily using ai rn
#include <iostream>
#include <cfloat> // Required for -DBL_MAX

using namespace std;

int main() {
    char op;
    double a, b, res;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // The 'switch' checks the value of 'op' once and jumps to the matching case
    switch (op) {
        case '+':
            res = a + b;
            break; // 'break' exits the switch so it doesn't run the next cases

        case '-':
            res = a - b;
            break;

        case '*':
            res = a * b;
            break;

        case '/':
            // Adding a check to prevent crashing on division by zero
            if (b != 0) {
                res = a / b;
            } else {
                cout << "Error! Division by zero." << endl;
                res = -DBL_MAX;
            }
            break;

        default:
            // 'default' runs if 'op' doesn't match any of the cases above
            cout << "Error! Operator is not correct" << endl;
            res = -DBL_MAX;
    }

    // Only print the result if we didn't hit an error flag
    if (res != -DBL_MAX) {
        cout << "Result: " << res << endl;
    }

    return 0;
}
