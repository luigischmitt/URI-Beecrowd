// beecrowd | 1036 (Bhaskara's Formula)

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double delta, a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b*b - 4*a*c;

    if (delta < 0 || a == 0) {
        cout << "Impossivel calcular\n";
    } else {
        cout << "R1 = " << fixed << setprecision(5) << (-b+sqrt(delta))/(2*a) << "\n";
        cout << "R2 = " << fixed << setprecision(5) << (-b-sqrt(delta))/(2*a) << "\n";
    }

    return 0;
}
