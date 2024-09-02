// beecrowd | 1009 (Salary with Bonus)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char name[50];
    double profit, sales, comissao, total;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter profit: ";
    cin >> profit;

    cout << "Enter sales: ";
    cin >> sales;

    comissao = sales * 0.15;

    total = comissao + profit;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << "\n";

    return 0;
}
