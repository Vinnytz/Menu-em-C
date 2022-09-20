#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, anoBisexto;

    do{
        printf("Digite seu ano de nascimento: ");
        scanf("%d", &idade);
    }while (idade>2022 || idade<1890);

    anoBisexto=(idade%4);
        if (anoBisexto==0)
        {
            printf("Seu aniversario é em um ano bisexto.");
        }
        else
        {
            printf("Seu aniversario não é em um ano bisexto.");
        }
    return 0;
}
