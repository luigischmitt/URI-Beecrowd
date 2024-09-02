// beecrowd | 1011 (Sphere)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int R;
    double PI = 3.14159;

    cin >> R;

    cout << "VOLUME = " << fixed << setprecision(3) << (4/3.0) * PI * R*R*R << "\n";

    return 0;
}
