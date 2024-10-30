// beecrowd | 1551 (Frase Completa)

#include <stdio.h>
#include <string.h>

void RemoveBarraN(char *str){
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
}

int ehVogal(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); // 0 ou 1
}

int main(void){
    int t, contadores[26], i, indiceContador, contaDistintos;
    char frase[1002];

    scanf("%d%*c", &t); // *c para limpar o buffer do /n

    while(t--){
        fgets(frase, 1002, stdin);

        RemoveBarraN(frase); // limpar

        for(i = 0; i < 26; i++){ //zerar os contadores
            contadores[i] = 0;
        }

        for(i = 0; frase[i] != '\0'; i++){
            if (frase[i] >= 'a' && frase[i] <= 'z'){
                indiceContador = frase[i] - 'a';
                contadores[indiceContador]++;
            }
        }

        contaDistintos = 0;
        for(i = 0; i < 26; i++){
            if (contadores[i] > 0)
                contaDistintos++;
        }

        if (contaDistintos == 26){
            puts("frase completa");
        } else if (contaDistintos >= 13){
            puts("frase quase completa");
        } else{
            puts("frase mal elaborada");
        }
    }

    return 0;
}
