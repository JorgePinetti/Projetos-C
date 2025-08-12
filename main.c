#include <stdio.h>
int main()
{
    char nome[20];
    int idade, matricula;

    printf("=====Cadastro de alunos=====\n");

    printf("Nome: ");
    scanf("%s", &nome);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Matricula: ");
    scanf("%d", &matricula);

    printf("===========================\n");
    printf("Aluno cadastrado: \n");

    printf("Aluno: %s\nIdade: %d \nMatricula: %d", nome, idade, matricula);

    return 0;
}
