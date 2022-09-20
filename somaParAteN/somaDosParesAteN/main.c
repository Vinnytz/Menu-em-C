#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorN, transformaPar, numerosPares=0, somaDosPares=0;

    printf("Este programa faz a soma dos primeiros numeros pares até n.\n"
           "Digite o valor de N inteiro: ");
    scanf("%d", &valorN);

    if ((valorN%2)!=0){
        transformaPar=(valorN-1);
    }

    while (valorN>=numerosPares || transformaPar>=numerosPares){
        somaDosPares=(somaDosPares+numerosPares);
        numerosPares=(numerosPares+2);
    }
    printf("O resultado é %d", somaDosPares);
    return 0;
}
