// beecrowd | 2221 (Batalha de Pomekons)

#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        int Bonus, Dabriel[3] = {0}, Guarte[3] = {0};

        scanf("%d", &Bonus);

        for (int i = 0; i < 3; i++) {
            scanf("%d", &Dabriel[i]);
        }
        for (int i = 0; i < 3; i++) {
            scanf("%d", &Guarte[i]);
        }
        
        float bonus_d = 0, bonus_g = 0, golpe_dabriel, golpe_guarte;
        if (Dabriel[2] % 2 == 0) 
            bonus_d = Bonus;
        if (Guarte[2] % 2 == 0) 
            bonus_g = Bonus;
        
        golpe_dabriel = ((Dabriel[0] + Dabriel[1]) / 2.0) + bonus_d;
        golpe_guarte = ((Guarte[0] + Guarte[1]) / 2.0) + bonus_g;

        if (golpe_dabriel > golpe_guarte) {
            printf("Dabriel\n");
        } else if (golpe_dabriel < golpe_guarte) {
            printf("Guarte\n");
        } else {
            printf("Empate\n");
        }
    }

    return 0;
}
