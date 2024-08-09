// beecrowd | 1047 (Game Time with Minutes)

#include <stdio.h>

int main() {

    int h1, m1, h2, m2, h, m;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int start_time = h1 * 60 + m1;
    int end_time = h2 * 60 + m2;

    if (end_time <= start_time) {
        end_time += 24 * 60; 
    }

    int duration = end_time - start_time;

    h = duration / 60; 
    m = duration % 60; 

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

    return 0;
}
