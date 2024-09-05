// beecrowd | 1116 (Dividindo X por Y)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, x, y;
    float div;

    cin >> n;

    while (n--) {
        cin >> x >> y;

        if (y == 0) {
            cout << "divisao impossivel\n";
        } else {
            div = (float) x / y;
            cout << fixed << setprecision(1) << div << "\n";
        }
    }

    return 0;
}
