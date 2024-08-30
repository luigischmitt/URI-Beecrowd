// beecrowd | 1006 (Average 2)

#include <iostream>  
#include <iomanip>

using namespace std;

int main() {

    double media, a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    media = (a*2+b*3+c*5)/ 10;

    cout << "MEDIA = " << fixed << setprecision(1) << media << "\n";

    return 0;
}
