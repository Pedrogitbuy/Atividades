#include <stdio.h>

int main() {
    float salario;
    int num_filhos;
    
    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);
    
    printf("Digite o numero de filhos: ");
    scanf("%d", &num_filhos);
    
    if (salario < 2000) {
        float salario_familia = 45.0 * num_filhos;
        float salario_final = salario + salario_familia;
        printf("Salario final com salario familia: R$ %.2f\n", salario_final);
    } else {
        printf("Salario final sem salario familia: R$ %.2f\n", salario);
    }
    
    return 0;
}
