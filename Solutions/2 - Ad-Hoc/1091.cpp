// beecrowd | 1091 (Divisão da Nlogônia)

#include <bits/stdc++.h> 

using namespace std;     

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

#define f first
#define s second

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

    int k = 1, n, m, x, y;

    while (k) {
        cin >> k;
        if (k == 0)
            break;
        cin >> n >> m;
        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            if (x == n || y == m) {
                cout << "divisa" << "\n";
            } else if (x > n && y > m) {
                cout << "NE" << "\n";
            } else if (x > n && y < m) {
                cout << "SE" << "\n";
            } else if (x < n && y < m) {
                cout << "SO" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}
