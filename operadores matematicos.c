#include <stdio.h>
int main()
{
    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;
    printf("Operadores Matematicos\n");

    printf("\nNumero 1: ");
    scanf("%d", &numero1);

    printf("Numero 2: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("\n%d + %d = %d\n", numero1, numero2, soma);
    printf("%d - %d = %d\n", numero1, numero2, subtracao);
    printf("%d x %d = %d\n", numero1, numero2, multiplicacao);
    printf("%d / %d = %f\n", numero1, numero2, divisao);
    return 0;
}
