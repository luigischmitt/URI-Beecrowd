// beecrowd | 1759 (Ho Ho Ho)

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ho";
        if (i < n - 1) {
            cout << " "; 
        }
    }
    cout << "!" << endl;  

    return 0;
}
