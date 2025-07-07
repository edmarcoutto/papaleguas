#include <stdio.h>
#include <string.h> // Para usar strcspn()

int main()
{
    char nomeCompleto[100];
    int idade;
    char genero;
    char cpf[12];
    char telefone[20];
    char email[100];
    float peso;
    
    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite seu gênero (M/F/O):");
    scanf("%c", &genero);
    
    printf("Digite seu CPF (apenas números):");
    scanf("%s", &cpf);
    
    printf("Digite seu telefone:");
    scanf("%s", &telefone);

    printf("Digite seu e-mail:");
    scanf("%s", &email);

    
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    
    printf("\n--- Dados Cadastrados ---\n");
    printf("Nome completo: %s\n", nomeCompleto);
    printf("Idade: %d anos\n", idade);
    printf("Gênero: %c\n", genero);
    printf("CPF: %s\n", cpf);
    printf("Telefone: %s\n", telefone);
    printf("E-mail: %s\n", email);
    printf("Peso: %.2f kg\n", peso);
    
    return 0;
}