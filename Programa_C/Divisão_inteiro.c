#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    int resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        resultado = num1 / num2;
        printf("Resultado da divisão inteira: %d\n", resultado);
    } else {
        printf("Erro: Divisão por zero!\n");
    }

    return 0;
}