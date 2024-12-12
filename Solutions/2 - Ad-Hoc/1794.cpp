// beecrowd | 1794 (Lavanderia)

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

    int n, la, lb, sa, sb;

    cin >> n;
    cin >> la >> lb;
    cin >> sa >> sb;

    if (la <= n && lb >= n && sa <= n && sb >= n) {
        cout << "possivel" << endl;
    } else {
        cout << "impossivel" << endl;
    }
    
    return 0;
}
