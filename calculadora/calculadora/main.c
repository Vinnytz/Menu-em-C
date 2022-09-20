#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    float valor1;
    float valor2;
    float resultado;
    int escolha;
    char opcao[8];

    printf("Este programa faz as seguintes operações matematicas:\n"
    "1. Adição.\n"
    "2. Subtração.\n"
    "3. Divisão.\n"
    "4. Multiplicação\n\n "
    "Digite o numero da operação desejada: ");
    scanf("%d", &escolha);

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    if (escolha==1)
    {
        resultado = (valor1+valor2);
        system("clear || cls");
        strcpy (opcao,"adição");
    }
    if (escolha ==2)
    {
        resultado = (valor1-valor2);
        system("clear || cls");
        strcpy (opcao,"subtração");
    }
    if (escolha ==4)
    {
        resultado = (valor1*valor2);
        system("clear || cls");
        strcpy (opcao,"multiplicação");
    }
    if (escolha ==3)
    {
        resultado = (valor1/valor2);
        system("clear || cls");
        strcpy (opcao,"divisão");
    }

    printf("O resultado da %s de %.2f com %.2f é %.2f.", opcao, valor1, valor2, resultado);
    return 0;
}
