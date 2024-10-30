// beecrowd | 2242 (Huaauhahhuahau)

#include <stdio.h>
#include <string.h>

int eh_vogal(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[51];
    int engra = 1; // Inicializa como "engraçado" e tenta provar o contrário

    scanf("%s", str);

    int l = 0, r = strlen(str) - 1;

    while (l < r) {
        while (l < r && !eh_vogal(str[l])) {
            l++;
        }

        while (l < r && !eh_vogal(str[r])) {
            r--;
        }
        
        if (str[l] != str[r]) {
            engra = 0; 
            break;
        }

        l++;
        r--;
    }

    if (engra) {
        puts("S");
    } else {
        puts("N");
    }
    
    return 0;
}
