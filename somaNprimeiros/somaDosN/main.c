#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nPrimeiro, somaN=0, contagem=1;

    printf("Este programa faz a soma dos N primeiros numeros inteiros.\n"
           "Digite o valor de n: ");
           scanf("%d", &nPrimeiro);

           while(nPrimeiro>=contagem)
           {
               somaN=(somaN+contagem);
               contagem++;
           }
           printf("A soma dos %d primeiros inteiros é %d.", nPrimeiro, somaN);
    return 0;
}
