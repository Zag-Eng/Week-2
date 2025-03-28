#include <iostream>
using namespace std;

class something {
public:
    static void printMessage(string s) {
        cout << s << endl;
    }
};


class Calculate {
public:
    static int add(int x, int y) {
        return x + y;
    }

    static int subtract(int x, int y) {
        return x - y;
    }

    static int multiply(int x, int y) {
        return x * y;
    }

    static int divide(int x, int y) {
        return x / y;
    }
};

int main()
{
    Something::printMessage("Hello everyone here!");

    int n1, n2;
    char op;
    cin >> n1 >> op >> n2;
    int result = 0;

    switch (op)
    {
    case '+':
        result = Calculate::add(n1, n2);
        break;
    case '-':
        result = Calculate::subtract(n1, n2);
        break;
    case '*':
        result = Calculate::multiply(n1, n2);
        break;
    case '/':
        if (n2 == 0)
            cout << "Division by zero error" << endl;
        else
            result = Calculate::divide(n1, n2);
        break;
    default:
        cout << "Invalid Operator" << endl; 
    }

    cout << "Result: " << result << endl;
    return 0;
}