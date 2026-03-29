#include <iostream>
#include <cfloat>

using namespace std; 

int main() {
  char op;
  double a, b, res;

  cout << "Enter an operator ( +, -, *, /): ";
cin >> op;
cout << "Enter two numbers: ";
cin >> a >> b;

if (op == '+') {
  res = a + b;
} else if (op == '-') {
  res = a - b;
} else if (op == '*') {
  res = a * b;
} else if (op == '/') {
  if (b !=0) {
    res = a / b;
} else {
          cout << "Error Division by zero.";
          res = -DBL_MAX;
       }
} else {
        cout "Error! Operator is not correct";
        res = -DBL_MAX;
}
if (res != -DBL_MAX)
  cout << "Result: " << res;

return 0;
}
