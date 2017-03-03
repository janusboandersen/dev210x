#include "std_lib_facilities.h"

int main() {

    //Stroustrup p. 86 exercises
    cout << "Please enter an operation (+ - * / ^) followed by two operands.\n";
    cout << "Example: + 100 3.14\n";
    char op;
    double op1, op2;
    cin >> op >> op1 >> op2; //read operator and operands 1 and 2

    double result {0};

    if (op == '+') {
        result = op1 + op2;
    } else if (op == '-') {
        result = op1 - op2;
    } else if (op == '*') {
        result = op1 * op2;
    } else if (op == '/') {
        result = op1 / op2;
    } else if (op == '^') {
        result = pow(op1, op2);
    } else {
        cout << "Operator not recognized\n";
    }

    cout << "Result: " << result << "\n";

    return 0;
}
