// beecrowd | 1015 (Distance Between Two Points)

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double d, x1, x2, y1, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    d = pow(x2-x1, 2) + pow(y2-y1, 2);

    cout << fixed << setprecision(4) << sqrt(d) << "\n";

    return 0;
}
