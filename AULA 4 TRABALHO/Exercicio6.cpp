#include <stdio.h>

int main() {
    int numeros[6];
    
    printf("Digite 6 n�meros inteiros:\n");
    
    for (int i = 0; i < 6; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    int maior = numeros[0]; // Suponha que o primeiro n�mero � o maior
    
    for (int i = 1; i < 6; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    
    printf("O maior n�mero digitado �: %d\n", maior);
    
    return 0;
}

