//  beecrowd | 1038 (Snack)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int quant, code;

    cin >> code >> quant;

    if (code == 1) {
        cout << "Total: R$ " << fixed << setprecision(2) << 4.0*quant << "\n";
    } else if (code == 2) {
        cout << "Total: R$ " << fixed << setprecision(2) << 4.5*quant << "\n";
    } else if (code == 3) {
        cout << "Total: R$ " << fixed << setprecision(2) << 5.0*quant << "\n";
    } else if (code == 4) {
        cout << "Total: R$ " << fixed << setprecision(2) << 2.0*quant << "\n";
    } else {
        cout << "Total: R$ " << fixed << setprecision(2) << 1.5*quant << "\n";
    }

    return 0;
}
