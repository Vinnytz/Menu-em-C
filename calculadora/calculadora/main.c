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

    printf("Este programa faz as seguintes opera��es matematicas:\n"
    "1. Adi��o.\n"
    "2. Subtra��o.\n"
    "3. Divis�o.\n"
    "4. Multiplica��o\n\n "
    "Digite o numero da opera��o desejada: ");
    scanf("%d", &escolha);

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    if (escolha==1)
    {
        resultado = (valor1+valor2);
        system("clear || cls");
        strcpy (opcao,"adi��o");
    }
    if (escolha ==2)
    {
        resultado = (valor1-valor2);
        system("clear || cls");
        strcpy (opcao,"subtra��o");
    }
    if (escolha ==4)
    {
        resultado = (valor1*valor2);
        system("clear || cls");
        strcpy (opcao,"multiplica��o");
    }
    if (escolha ==3)
    {
        resultado = (valor1/valor2);
        system("clear || cls");
        strcpy (opcao,"divis�o");
    }

    printf("O resultado da %s de %.2f com %.2f � %.2f.", opcao, valor1, valor2, resultado);
    return 0;
}
