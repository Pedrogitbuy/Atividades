#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os valores dos lados do tri�ngulo:\n");
    printf("Lado a: ");
    scanf("%f", &a);
    printf("Lado b: ");
    scanf("%f", &b);
    printf("Lado c: ");
    scanf("%f", &c);

    if (a != b && b != c && a != c) {
        printf("Tri�ngulo Escaleno\n");
    } else if (a == b && b == c) {
        printf("Tri�ngulo Equil�tero\n");
    } else {
        printf("Tri�ngulo Is�sceles\n");
    }

    return 0;
}

