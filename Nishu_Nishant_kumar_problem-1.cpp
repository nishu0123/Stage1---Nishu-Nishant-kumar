#include <bits/stdc++.h>
using namespace std;

/*
Problem-1: Create a small calculator which performs operations such as Addition, Subtraction, Multiplication and Division using class.
  Calculator inputs :> ‘a’, ‘b’ and ‘type of operation’
  Datatype :> ‘a’ = double, ‘b’ = double, ‘type of operation’ = string
*/

class Calculator {
private:
    double num1;
    double num2;

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 == 0)
            throw runtime_error("Division by zero");  //make sure num2 is not zero
        return num1 / num2;
    }

public:
    double calculate(double a, double b, string op) {
        num1 = a;
        num2 = b;

        if (op == "+") return add();
        else if (op == "-") return subtract();
        else if (op == "*") return multiply();
        else if (op == "/") return divide();
        else throw invalid_argument("Invalid operator");  //give message to the user about the operator , we can handle at the user side as well 
    }
};

int main() {
    double a, b;
    string op;

    cin >> a >> b >> op;

    Calculator obj;
    double ans = obj.calculate(a, b, op);

    cout << a << " " << op << " " << b << " = " << ans << endl;
    return 0;
}
