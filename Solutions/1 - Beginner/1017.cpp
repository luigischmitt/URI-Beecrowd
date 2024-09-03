// beecrowd | 1017 (Fuel Spent)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int h, km;
    float spent;

    cin >> h;
    cin >> km;
    
    spent = (h*km)/12.0;

    cout << fixed << setprecision(3) << spent << "\n";

    return 0;
}
