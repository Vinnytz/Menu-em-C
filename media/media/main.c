#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float mediaFinal;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);
    printf("Insira sua quarta nota: ");
    scanf("%f", &nota4);

    mediaFinal = (nota1+nota2+nota3+nota4)/4;

    if (mediaFinal>=7 && mediaFinal<=10)
    {
        printf("Parabéns você foi aprovado com a media de %.2f.", mediaFinal);
    }
    else
    {
        printf("Infelizmente você foi reprovado com uma media de %.2f", mediaFinal);
    }
    return 0;
}
