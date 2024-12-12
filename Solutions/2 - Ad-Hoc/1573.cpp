// beecrowd | 1573 (Fábrica de Chocolate)

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

    double a, b, c;

    while(cin >> a >> b >> c) {
        if (!a && !b && !c) break;

        cout << (int)cbrt(a*b*c) << endl;
    }

    return 0;
}
