#include <stdio.h>

int main()
{
//======= VARIAVEIS =========

    char crianca[50];
    char responsavel[50];
    char cpf[11];
    char endereco[50];

    int idadeCrianca;
    int idadeResponsavel;
    int id;

//===========================

    printf("+===============================+\n");
    printf("|           CADASTRO            |\n");
    printf("+===============================+\n\n");

    printf("Nome Responsavel: ");
    scanf("%s", &responsavel);

    printf("Idade responsavel: ");
    scanf("%d", &idadeResponsavel);
    
    printf("Insira o CPF:  ");
    scanf("%s", &cpf);
    
    printf("Insira o Endereco: ");
    scanf("%50s", &endereco); 

    printf("Nome crianca: ");
    scanf("%50s", &crianca);

    printf("Idade crianca: ");
    scanf("%d", &idadeCrianca);

   srand(time(0));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("ID: ");

    printf("%d", number1);
    printf("%d", number2);
    printf("%d", number3);

    return 0;
}