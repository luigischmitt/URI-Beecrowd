// beecrowd | 1008 (Salary)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a, b;
    float salary, c;

    cin >> a;
    cin >> b;
    cin >> c;

    salary = b*c;

    cout << "NUMBER = " << a << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << "\n";

    return 0;
}
