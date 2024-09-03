// beecrowd | 1020 (Age in Days)

#include <iostream>

using namespace std;

int main() {

    int y, m, d, n;
    
    cin >> n;

    y = n / 365;
    n = n % 365;
    m = n / 30;
    n = n % 30;
    d = n;

    cout << y << " ano(s)\n";
    cout << m << " mes(es)\n";
    cout << d << " dia(s)\n";

    return 0;
}
