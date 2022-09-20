#include <stdio.h>
#include <stdlib.h>
/*Necessario teste nesse proigrama inda */
int main()
{
     int idade=-2, quantMulheres=0, quantIdadeMulher=0, geral=0, maiorIdade=0;
     float pctgMulheres;
     char sexo;

     printf("Este programa ira permitira que você coloque a idade e o sexo de  n pessoas"
           " até que você saia do programa digitando -1 ao colocar a idade.");
    while (idade!=-1)
    {
        setbuf(stdin, NULL);
        printf("\n\nDigite seu sexo \"m\" para masculino e \"f\" para feminino: ");
        scanf("%c", &sexo);
        printf("Digite sua idade (somente inteiros): ");
        scanf("%d", &idade);

        if (sexo=='f')
        {
            quantMulheres++;
        }
        if (sexo=='f' && (idade>=18 && idade<=35))
        {
            quantIdadeMulher++;
        }
        if (idade>maiorIdade)
        {
            maiorIdade=idade;
        }
        geral++;
    }
    pctgMulheres=((quantIdadeMulher*100)/geral);
    printf("De acordo com a pesquisa, obtivemos os seguintes dados:\n"
           "Maior idade registrada: %d\n"
            "Quantidade geral de pessoas registrada %d\n"
            "Quantidade geral de mulheres registradas %d\n"
            "Percentual do sexo feminino registrado é de %d%%", maiorIdade, geral, quantMulheres, pctgMulheres);
    return 0;
}
