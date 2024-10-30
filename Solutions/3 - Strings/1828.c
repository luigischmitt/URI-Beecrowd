// beecrowd | 1828 (Bazinga!)

#include <stdio.h>
#include <string.h>

int main(void){
    int t, i;
    char s[21], r[21];

    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%s %s", s, r);

        printf("Caso #%d: ", i);
        if (strcmp(s, r) == 0){
            puts("De novo!");
            continue;
        }

        if (strcmp(s, "tesoura") == 0){
            if (strcmp(r, "papel") == 0 || strcmp(r, "lagarto") == 0){
                puts("Bazinga!");
            }else{
                puts("Raj trapaceou!");
            }
        }
        if (strcmp(s, "papel") == 0){
            if (strcmp(r, "pedra") == 0 || strcmp(r, "Spock") == 0){
                puts("Bazinga!");
            }else{
                puts("Raj trapaceou!");
            }
        }
        if (strcmp(s, "pedra") == 0){
            if (strcmp(r, "lagarto") == 0 || strcmp(r, "tesoura") == 0){
                puts("Bazinga!");
            }else{
                puts("Raj trapaceou!");
            }
        }
        if (strcmp(s, "lagarto") == 0){
            if (strcmp(r, "Spock") == 0 || strcmp(r, "papel") == 0){
                puts("Bazinga!");
            }else{
                puts("Raj trapaceou!");
            }
        }
        if (strcmp(s, "Spock") == 0){
            if (strcmp(r, "tesoura") == 0 || strcmp(r, "pedra") == 0){
                puts("Bazinga!");
            }else{
                puts("Raj trapaceou!");
            }
        }

    }

    return 0;
}
