// beecrowd | 2569 (A Bruxa do 7 x 1)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char operando1[6], operando2[6], operacao, resultadoStr[21];
    int i, resultado;

    scanf("%s %c %s", operando1, &operacao, operando2);

    for(i = 0; i < strlen(operando1); i++){
        if (operando1[i] == '7')
            operando1[i] = '0';
    }

    for(i = 0; i < strlen(operando2); i++){
        if (operando2[i] == '7')
            operando2[i] = '0';
    }

    if (operacao == '+'){
        resultado = atoi(operando1) + atoi(operando2);
    } else {
        resultado = atoi(operando1) * atoi(operando2);
    }

    sprintf(resultadoStr, "%d", resultado);
    
    for(i = 0; i < strlen(resultadoStr); i++){
        if (resultadoStr[i] == '7')
            resultadoStr[i] = '0';
    }

    printf("%d\n", atoi(resultadoStr));

    return 0;
}