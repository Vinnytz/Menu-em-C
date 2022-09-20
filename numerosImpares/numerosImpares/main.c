#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantImpares, numerosImpares=1, valorFinal, contador=1;

    printf("\t\tEste programa ira printar os n impares que forem requeridos.\n\n"
           "Quantos numeros impares você gostaria de ver: ");
       scanf("%d", &quantImpares);

       valorFinal=((quantImpares*2)-1);
       while(quantImpares>contador)
       {
           printf("%d, ", numerosImpares);
           numerosImpares=numerosImpares+2;
           contador++;
       }
       while(quantImpares==contador)
       {
           printf("%d.", valorFinal);
           contador++;
       }

    return 0;
}
