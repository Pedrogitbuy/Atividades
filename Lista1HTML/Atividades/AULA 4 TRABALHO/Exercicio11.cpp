#include <stdio.h>
#include <string.h>

int main() {
    char peca[20];
    float preco, desconto, precoFinal;

    printf("Digite a pe�a (camisa, bermuda ou cal�a): ");
    scanf("%s", peca);

    printf("Digite o pre�o da pe�a: R$ ");
    scanf("%f", &preco);

    if (strcmp(peca, "camisa") == 0) {
        desconto = 0.20;
    } else if (strcmp(peca, "bermuda") == 0) {
        desconto = 0.10;
    } else if (strcmp(peca, "cal�a") == 0) {
        desconto = 0.15;
    } else {
        printf("Pe�a inv�lida.\n");
        return 0;
    }

    precoFinal = preco - (preco * desconto);

    printf("Pe�a: %s\n", peca);
    printf("Desconto: %.2f%%\n", desconto * 100);
    printf("Pre�o final: R$ %.2f\n", precoFinal);

    return 0;
}

