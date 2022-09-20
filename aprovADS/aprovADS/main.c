#include <stdio.h>
#include <stdlib.h>

int main()
{
    float np1;
    float np2;
    float PIM;
    float mediaFinal;
    int pctgpresenca;
    int presenca;

    printf("Digite a nota da sua np1: ");
    scanf("%f", &np1);
    printf("Digite a nota da sua np2: ");
    scanf("%f", &np2);
    printf("Digite a nota do seu PIM: ");
    scanf("%f", &PIM);
    printf("Dentre as 50 aulas do semestre, digite em quantas aulas você compareceu: ");
    scanf("%d", &presenca);

    pctgpresenca=(presenca*2);
    mediaFinal=((np1*0.4)+(np2*0.4)+(PIM*0.2));

    if (presenca>=38 && mediaFinal>=5)
    {
        system("cls || clear");
        printf("Parabéns você foi aprovado com uma media de %.2f e uma presenca de %d%%.", mediaFinal, pctgpresenca);
    }
    if (presenca>=38 && mediaFinal<5)
    {
        system("cls || clear");
        printf("Infelizmente você não foi aprovado, sua media não atingiu o necessario.\n"
               "Media final de %.2f. :(", mediaFinal);
    }
    if (presenca<38 && mediaFinal>=5)
    {
        system("cls || clear");
        printf("Você atingiu a media desejada, mas infelizmente não obteve a presença minima.\n"
               "Media final de %.2f e presenca de %d%%.", mediaFinal, pctgpresenca);
    }
    if (presenca<38 && mediaFinal<5)
    {
        system("cls || clear");
        printf("Sua media e sua presenca infelizmente não foram atingidas.\n"
               "Media de %.2f e presenca de %d%%.", mediaFinal, pctgpresenca);
    }
    return 0;
}
