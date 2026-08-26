#include <stdio.h>

int main() {
    int numeros[5], i, soma = 0;
    float media;

    for (i = 0; i < 5; i++) {
        printf("Digite o %i numero: ", i + 1);
        scanf("%i", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 5;

    printf("\nNumeros digitados: ");
    for (i = 0; i < 5; i++) {
        printf("%i ", numeros[i]);
    }

    printf("\nSoma: %i", soma);
    printf("\nMedia: %.2f\n", media);

    return(0);
}
