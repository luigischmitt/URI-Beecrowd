// beecrowd | 1019 (Time Conversion)

#include <iostream>

using namespace std;

int main() {

    int hour, min, sec, n;

    cin >> n;

    hour = n / 3600;
    n = n % 3600;
    min = n / 60;
    n = n % 60;
    sec = n;

    cout << hour << ":" << min << ":" << sec << "\n";

    return 0;
}
