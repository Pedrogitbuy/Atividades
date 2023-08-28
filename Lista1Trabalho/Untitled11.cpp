#include <stdio.h>
#include <string.h>

int main() {
    char peca[20];
    float preco, desconto, precoFinal;

    printf("Digite a peca (camisa, bermuda ou calca): ");
    scanf("%s", peca);

    printf("Digite o preco da peça: R$ ");
    scanf("%f", &preco);

    if (strcmp(peca, "camisa") == 0) {
        desconto = 0.20;
    } else if (strcmp(peca, "bermuda") == 0) {
        desconto = 0.10;
    } else if (strcmp(peca, "calca") == 0) {
        desconto = 0.15;
    } else {
        printf("Peça invalida.\n");
        return 0;
    }

    precoFinal = preco - (preco * desconto);

    printf("Peca: %s\n", peca);
    printf("Desconto: %.2f%%\n", desconto * 100);
    printf("Preco final: R$ %.2f\n", precoFinal);

    return 0;
}

