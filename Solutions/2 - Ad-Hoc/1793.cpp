// beecrowd | 1793 (Escada Rolante)

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

    int k;

    while (cin >> k && k) {
        int sum = 10, cur, act;
        
        cin >> cur;
        for (int i = 0; i < k - 1; i++) {
            cin >> act;
            if ((act - cur) > 9)
                sum += 10;
            else
                sum += (act - cur);
            cur = act;
        }
        cout << sum << endl;
    }

    return 0;
}
