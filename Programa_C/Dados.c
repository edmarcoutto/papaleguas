#include <stdio.h>
#include <string.h>

int main()
{
    char nomeCompleto[100];
    char apelido[50];
    int idade;
    float altura;
    
    printf("Digite seu nome completo:");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
    
    printf("Digite seu apelido:");
    fgets(apelido, sizeof(apelido), stdin);
    
    printf("Digite sua idade:");
    scanf("%d", &idade);
    
    printf("Digite sua altura:");
    scanf("%f", &altura);
    
    printf("\n---Dados Recebidos---\n");
    printf("Nome: %s", nomeCompleto);
    printf("Apelido: %s", apelido);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f Metros\n", altura);
    

    return 0;
}