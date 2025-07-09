#include <stdio.h>
#include <stdbool.h>

int main() {
    int idade;
    bool maiorDeIdade =true;
    bool menorDeIdade = false;
    
    printf("Digite sua Idade:");
    scanf("%d", &idade);
    
    maiorDeIdade = idade >= 18;
    menorDeIdade = idade <= 18;
    
    if(maiorDeIdade){
        printf("Você é feio demais. \n");
    }else{
        printf("Você é menor de idade.\n");
    }
    
    return 0;
}