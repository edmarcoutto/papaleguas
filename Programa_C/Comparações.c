#include <stdio.h>

    int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d é maior que %d\n", num1, num2);
    } 
    else if (num1 < num2) {
        printf("%d é menor que %d\n", num1, num2);
    } 
    else {
        printf("Os números são iguais: %d\n", num1);
    }

    return 0;
}