// beecrowd | 1131 (Grenais)

#include <bits/stdc++.h>

using namespace std;

int main() {

    int grenais = 0, emp = 0, vitg = 0, viti = 0, gremio, inter, novo_grenal = 0;

    while (novo_grenal != 2) {
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> inter >> gremio;
        cin >> novo_grenal;

        grenais++;

        if (gremio == inter) {
            emp++;
        } else if (gremio > inter) {
            vitg++;
        } else {
            viti++;
        }
    }

    cout << grenais << " grenais\n";
    cout << "Inter:" << viti << "\n";
    cout << "Gremio:" << vitg << "\n";
    cout << "Empates:" << emp << "\n";

    if (viti == vitg) {
        cout << "Nao houve vencedor\n";
    } else if (viti > vitg) {
        cout << "Inter venceu mais\n";
    } else {
        cout << "Gremio venceu mais\n";
    }
    
}
