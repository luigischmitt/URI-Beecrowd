// beecrowd | 1176 (Fibonacci em vetor)

#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int t, n;
    cin >> t; 

    while (t--) {
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }
    
    return 0;
}
