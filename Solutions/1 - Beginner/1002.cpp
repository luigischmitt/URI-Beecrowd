// beecrowd | 1002 (Area of circle)

#include <iostream>  
#include <iomanip>

using namespace std;

const double PI = 3.14159;

int main() {

    double R, area;

    cin >> R;

    area = R*R*PI;

    cout << "A=" << fixed << setprecision(4) << area << "\n";

    return 0;
}
