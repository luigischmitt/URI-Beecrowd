// beecrowd | 1010 (Simple Calculate)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cod1, num1, cod2, num2;
    double val1, val2, total;

    cout << "Enter code1, number1, value1: ";
    cin >> cod1 >> num1 >> val1;

    cout << "Enter code2, number2, value2: ";
    cin >> cod2 >> num2 >> val2;

    total = (num1 * val1) + (num2 * val2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << "\n";

    return 0;
}
