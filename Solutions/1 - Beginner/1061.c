// beecrowd | 1061 (Event Time)

#include <stdio.h>

int main() {
    char inicio_dia[5], final_dia[5];
    int dia_inicio, hora_inicio, minuto_inicio, segundo_inicio;
    int dia_final, hora_final, minuto_final, segundo_final;
    int dias, horas, minutos, segundos;

    scanf("%s %d", inicio_dia, &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);

    scanf("%s %d", final_dia, &dia_final);
    scanf("%d : %d : %d", &hora_final, &minuto_final, &segundo_final);

    dias = dia_final - dia_inicio;
    horas = hora_final - hora_inicio;
    minutos = minuto_final - minuto_inicio;
    segundos = segundo_final - segundo_inicio;

    if (segundos < 0) {
        segundos += 60;
        minutos--;
    }
    if (minutos < 0) {
        minutos += 60;
        horas--;
    }
    if (horas < 0) {
        horas += 24;
        dias--;
    }

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
