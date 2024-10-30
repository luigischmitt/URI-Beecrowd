// beecrowd | 2062 (OBI URI)

#include <stdio.h>
#include <string.h>

int main(void){
    int n, i;
    char palavra[21];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s", palavra);

        if (strlen(palavra) == 3){
            if (strstr(palavra, "OB") == palavra){
                printf("OBI");
            }else if (strstr(palavra, "UR") == palavra){
                printf("URI");
            }else{
                printf("%s", palavra);
            }
        } else {
            printf("%s", palavra);
        }

        printf("%c", (i == n-1) ? '\n' : ' ');  // Imprime um espaço, exceto para a última palavra
    }

    return 0;
}
