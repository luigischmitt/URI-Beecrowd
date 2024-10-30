// beecrowd | 2153 (Sanduicheiche)

#include <string.h>
#include <stdio.h>

int main() {
    char palavra[31];
    char *fim, *pos;

    while (scanf("%s", palavra) != EOF) {

        fim = &palavra[strlen(palavra) - 1];    // fim recebe o endereço do final da palavra
        while(fim >= palavra){
            pos = strstr(palavra, fim);
            if (pos + strlen(fim) == fim){      // achando a repeticao
                *fim = '\0';                    // substituindo o fim por '\0'
                break;
            }
            fim--;
        }

        puts(palavra);

    }

    return 0;
}
