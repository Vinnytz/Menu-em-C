#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantAlunos, contador=1;
    float media, nota1, nota2;

    printf("Este programa imprime a media semestral de n alunos.\n"
           "De quantos alunos você gostaria de saber a media: ");
   scanf("%d", &quantAlunos);

   while(quantAlunos>=contador)
   {
        printf("\n\t\t\t\tAluno %d\n\n", contador);
       printf("Digite a sua primeira nota (NP1): ");
       scanf("%f", &nota1);
       printf("Digite a sua segunda nota (NP2): ");
       scanf("%f", &nota2);
       media=(nota1+nota2)/2;
       if (media>=5)
       {
           system("cls || clean");
           printf("Parabéns você foi aprovado, sua media foi %.2f\n", media);
       }
       else
        {
            system("cls || clear");
            printf("Infelizmente você não atingiu o necessario, sua media foi %.2f\n", media);
        }

        contador++;
   }
    return 0;
}
