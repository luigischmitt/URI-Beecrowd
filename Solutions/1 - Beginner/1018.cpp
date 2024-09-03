// beecrowd | 1018 (Banknotes)

#include <iostream>

using namespace std;

int main(){

    int notes, aux;

    cin >> notes;

    cout << notes << "\n";
    cout << notes/100 << " nota(s) de R$ 100,00\n";
    aux = (notes%100);

    cout << notes/50 << " nota(s) de R$ 50,00\n";
    aux = (notes%50);

    cout << notes/20 << " nota(s) de R$ 20,00\n";
    aux = (notes%20);

    cout << notes/10 << " nota(s) de R$ 10,00\n";
    aux = (notes%10);

    cout << notes/5 << " nota(s) de R$ 5,00\n";
    aux = (notes%5);

    cout << notes/2 << " nota(s) de R$ 2,00\n";
    aux = (notes%2);

    cout << notes/1 << " nota(s) de R$ 1,00\n";

    return 0;
}
