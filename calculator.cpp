#include <iostream>
using namespace std;


int sum_num(int a, int b);
int subtract_num(int a, int b);
int multiply_num(int a, int b);
int divide_num(int a, int b);

int main(void) {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    int opt;
    cout << "Enter operator: ";
    cin >> opt;
    if (opt == 1) {
        cout << "Sum: " << sum_num(x, y) << "\n";
    }  else if (opt == 2) {
        cout << "Difference: " << subtract_num(x,  y) << endl;
    } else if (opt == 3) {
        cout << "Multiply: " << multiply_num(x,  y) << endl;  
    } else if (opt == 4) {
        cout << "Divide: " << divide_num(x, y) << endl;
    }
}
int sum_num(int a, int b) {
    return a + b;
}

int subtract_num(int a, int b) {
    return a - b;
}

int multiply_num(int a, int b) {
    return a * b;
}

int divide_num(int a, int b) {
    return a / b;
}