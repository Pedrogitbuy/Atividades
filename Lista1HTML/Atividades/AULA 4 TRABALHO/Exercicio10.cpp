#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("M�dia: %.2f\n", media);

    if (media >= 6.0) {
        printf("Situa��o: Aprovado\n");
    } else if (media >= 4.0) {
        printf("Situa��o: Recupera��o\n");
    } else {
        printf("Situa��o: Reprovado\n");
    }

    return 0;
}

