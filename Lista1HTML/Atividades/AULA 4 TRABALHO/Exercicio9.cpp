#include <stdio.h>

int main() {
    float salarioAtual, novoSalario;
    
    printf("Digite o sal�rio atual do funcion�rio: R$ ");
    scanf("%f", &salarioAtual);
    
    if (salarioAtual >= 1500.0 && salarioAtual < 1750.0) {
        novoSalario = salarioAtual * 1.15;
    } else if (salarioAtual >= 1750.0 && salarioAtual < 2000.0) {
        novoSalario = salarioAtual * 1.12;
    } else if (salarioAtual >= 2000.0 && salarioAtual < 3000.0) {
        novoSalario = salarioAtual * 1.09;
    } else if (salarioAtual >= 3000.0) {
        novoSalario = salarioAtual * 1.06;
    } else {
        printf("O sal�rio atual est� abaixo das faixas especificadas.\n");
        return 0;
    }
    
    printf("Novo sal�rio ap�s o reajuste: R$ %.2f\n", novoSalario);
    
    return 0;
}

