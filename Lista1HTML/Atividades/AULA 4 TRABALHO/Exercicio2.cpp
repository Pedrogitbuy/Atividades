#include <stdio.h>

int main() {
    float salario;
    int num_filhos;
    
    printf("Digite o sal�rio do funcion�rio: R$ ");
    scanf("%f", &salario);
    
    printf("Digite o n�mero de filhos: ");
    scanf("%d", &num_filhos);
    
    if (salario < 2000) {
        float salario_familia = 45.0 * num_filhos;
        float salario_final = salario + salario_familia;
        printf("Sal�rio final com sal�rio fam�lia: R$ %.2f\n", salario_final);
    } else {
        printf("Sal�rio final sem sal�rio fam�lia: R$ %.2f\n", salario);
    }
    
    return 0;
}
