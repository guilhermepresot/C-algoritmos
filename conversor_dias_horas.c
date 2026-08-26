#include <stdio.h>

int main() {
    int total_horas, dias, horas;

    printf("Digite o total de horas: ");
    scanf("%i", &total_horas);

    dias = total_horas / 24;
    horas = total_horas % 24;

    printf("%i horas = %i dias e %i horas\n", total_horas, dias, horas);

    return(0);
}
