#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("%d e o maior numero.\n", num1);
        printf("%d e o menor numero.\n", num2);
    } else if (num2 > num1) {
        printf("%d e o maior numero.\n", num2);
        printf("%d e o menor numero.\n", num1);
    } else {
        printf("Os numeros sao iguais.\n");
    }
    
    return 0;
}
