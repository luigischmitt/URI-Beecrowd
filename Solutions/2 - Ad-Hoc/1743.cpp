// beecrowd | 1743 (Máquina de Verificação Automatizada)

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

    int flag = 1;
    vector <int> x(5), y(5);

    for (int i = 0; i < 5; i++)
        cin >> x[i];
    
    for (int j = 0; j < 5; j++)
        cin >> y[j];

    for (int k = 0; k < 5; k++) {
        if (x[k] + y[k] != 1)
            flag = 0;
    }
    
    if (flag)
        cout << "Y" << endl;
    else 
        cout << "N" << endl;

    return 0;
}
