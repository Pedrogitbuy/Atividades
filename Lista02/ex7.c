#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, num5;
    int temp;
    
    printf("Digite cinco numeros: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    if(num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num2 > num3){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if(num3 > num4){
        temp = num3;
        num3 = num4;
        num4 = temp;
    }
    if(num4 > num5){
        temp = num4;
        num4 = num5;
        num5 = temp;
    }
    
    
    
    if(num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num2 > num3){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if(num3 > num4){
        temp = num3;
        num3 = num4;
        num4 = temp;
    }
    if(num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num2 > num3){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if(num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Numeros em ordem crescente:");
    printf("\n%d\n%d\n%d\n%d\n%d\n", num1, num2, num3, num4, num5);

    return 0;
}
