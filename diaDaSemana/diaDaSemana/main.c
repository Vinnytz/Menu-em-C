#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha;

    printf("Este programa recebera um numero de 1 a 7, e resultara com o dia da semana.\n"
           "Escolha um numero de 1 a 7: ");
   scanf("%d", &escolha);
   printf("\n");

   switch(escolha){

        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Você não colou uma escolha valida.\n");
            break;
   }
    return 0;
}
