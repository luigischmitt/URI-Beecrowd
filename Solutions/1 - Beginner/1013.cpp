// beecrowd | 1013 (The Greatest)

#include <iostream>

using namespace std;

int main() {

    int sub, maior, a, b;

    cin >> a >> b;
    
    sub = abs(a-b);

    maior = (a+b+sub)/2;

    cout << maior << " eh o maior" << "\n";

    return 0;
}
