#include <stdio.h>

int main() {
    float preco;
    
    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);
    
    if (preco > 1000) {
        float desconto = 0.08 * preco;
        float preco_final = preco - desconto;
        printf("Preco com desconto: R$ %.2f\n", preco_final);
    } else {
        printf("Sem desconto. Preco original: R$ %.2f\n", preco);
    }
    
    return 0;
}
