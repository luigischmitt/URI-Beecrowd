// beecrowd | 1005 (Average 1)

#include <iostream>  
#include <iomanip>

using namespace std;

int main() {

    double media, a, b;

    cin >> a;
    cin >> b;

    media = (a*3.5+b*7.5)/ 11;

    cout << "MEDIA = " << fixed << setprecision(5) << media << "\n";

    return 0;
}
