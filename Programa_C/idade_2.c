#include <stdio.h>
#define IDADE_MINIMA 18

int main() {
int idade;
    
    printf("Digite a idade de uma pessoa: ");
    scanf("%d", &idade);
    
    if (idade >= IDADE_MINIMA) {
            if (idade >= 60) {
            printf("Você é considerado um velho da Lancha.\n");
            } else {
            printf("Se vacilar, vai para o Xilindró.\n");
    }
    }else {
    printf("VOCÊ É SUSTENTADO PELOS PAIS.\n");
    }
    
    return 0;
}