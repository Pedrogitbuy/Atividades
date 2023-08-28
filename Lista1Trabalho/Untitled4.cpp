#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os valores dos lados do triangulo:\n");
    printf("Lado a: ");
    scanf("%f", &a);
    printf("Lado b: ");
    scanf("%f", &b);
    printf("Lado c: ");
    scanf("%f", &c);

    if (a != b && b != c && a != c) {
        printf("Triangulo Escaleno\n");
    } else if (a == b && b == c) {
        printf("Triangulo Equilátero\n");
    } else {
        printf("Triangulo Isósceles\n");
    }

    return 0;
}
