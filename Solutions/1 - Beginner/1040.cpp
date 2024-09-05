// beecrowd | 1040 (Average 3)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float final, exame, avg, n1, n2, n3, n4;

    cin >> n1 >> n2 >> n3 >> n4;

    avg = (n1*2 + n2*3 + n3*4 + n4*1) / 10;

    cout << "Media: " << fixed << setprecision(1) << avg << "\n";  
    if (avg >= 7.0) {
        cout << "Aluno aprovado.\n";
    } else if (avg >= 5.0 && avg < 7.0) {
        cout << "Aluno em exame.\n";
        cin >> exame; 
        cout << "Nota do exame: " << fixed << setprecision(1) << exame << "\n";
        final = (avg + exame) / 2;  
        if (final >= 5.0) {
            cout << "Aluno aprovado.\n";
        } else {
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << fixed << setprecision(1) << final << "\n";
    } else {
        cout << "Aluno reprovado.\n";
    }

    return 0;
}

