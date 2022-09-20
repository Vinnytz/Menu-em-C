#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tipo;
    float quant, preco;

    printf("Este programa calcula o preço que sera pago no combustivel\n"
           "\t\t1-Alcool (R$:1.7997)  /  2-Diesel (R$: 0.9798)  /  3-Gasolina (R$:2.1009) \n\n"
           "Que tipo de combustivel você gostaria: ");
           scanf("%d", &tipo);

           if (tipo >3 || tipo<1){
               printf("Você não escolheu uma opção.");
                return 0;
           }
           printf("Quantos litros: ");
           scanf("%f", &quant);


            if (tipo==1)
            {
               preco=(quant*1.7997);
            }
           if (tipo==2)
           {
             preco=(quant*0.9798);
           }
           if (tipo==3)
           {
            preco=(quant*2.1009);
           }


    printf("O preço total é R$: %.2f", preco);
}
