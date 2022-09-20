#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void  gestaoTI(){
    printf("\nGestão de Ti é a atividade que coordena todos os processos relacionados à tecnologia da informação dentro de uma empresa."
           " Logo, o gestor de TI é o profissional responsával por garantir a máxima eficiência no uso dos recursos humanos e tecnológicos,"
           " otimizando a performance da organização.\n");
}
void ADS(){
    printf("\nO analista e desenvolvedor de sistemas é o profissional responsável por desenvolver, projetar, analisar,"
           " implementar e realizar a manutenção de sistemas de informação de diversos setores.\n");
}
void infoSecurity(){
    printf("Segurança da informação é a prática que mantém os dados sensíveis em sigilo, a defesa do que não é público\n");
}
void mediaAprov(){
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

    if (mediaFinal>=7 && mediaFinal<=10){
        printf("Parabéns você foi aprovado com a media de %.2f.", mediaFinal);
    }

    else{
        printf("Infelizmente você foi reprovado com uma media de %.2f", mediaFinal);
    }
}
void diffMaiorMenor(){
    int numb1;
    int numb2;
    int diff;

    printf("Digite o primeiro inteiro:");
    scanf("%d", &numb1);
    printf("Digite o segundo inteiro:");
    scanf("%d", &numb2);

    if (numb1>numb2)
    {
        diff=(numb1-numb2);
    }
    else
    {
        diff=(numb2-numb1);
    }
    system("cls || clear");
    printf("A doferença entre %d e %d é %d", numb1, numb2, diff);
}
void aprovADS(){
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
}
void calculadora(){
        float valor1;
    float valor2;
    float resultado;
    int escolha;
    char opcao[8];

    printf("Este programa faz as seguintes operações matematicas:\n"
    "1. Adição.\n"
    "2. Subtração.\n"
    "3. Divisão.\n"
    "4. Multiplicação\n\n "
    "Digite o numero da operação desejada: ");
    scanf("%d", &escolha);

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    if (escolha==1)
    {
        resultado = (valor1+valor2);
        system("clear || cls");
        strcpy (opcao,"adição");
    }
    if (escolha ==2)
    {
        resultado = (valor1-valor2);
        system("clear || cls");
        strcpy (opcao,"subtração");
    }
    if (escolha ==4)
    {
        resultado = (valor1*valor2);
        system("clear || cls");
        strcpy (opcao,"multiplicação");
    }
    if (escolha ==3)
    {
        resultado = (valor1/valor2);
        system("clear || cls");
        strcpy (opcao,"divisão");
    }

    printf("O resultado da %s de %.2f com %.2f é %.2f.", opcao, valor1, valor2, resultado);
}
void calcComlculabustivel(){
    int tipo;
    float quant, preco;

    printf("Este programa calcula o preço que sera pago no combustivel\n"
           "\t\t1-Alcool (1.7997)  /  2-Diesel (0.9798)  /  3-Gasolina (2.1009) \n\n"
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
printf("O preço total é %f", preco);
}
void calcSemestral(){
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
           printf("Parabéns você foi aprovado, sua media foi %f\n", media);
       }
       else
        {
            system("cls || clear");
            printf("Infelizmente você não atingiu o necessario, sua media foi %f\n", media);
        }

       contador++;
   }
}
void numerosImpares(){
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
}
void nPrimeiros(){
        int nPrimeiro, somaN=0, contagem=0;

    printf("Este programa faz a soma dos N primeiros numeros inteiros.\n"
           "Digite o valor de n: ");
           scanf("%d", &nPrimeiro);

           while(nPrimeiro>=contagem)
           {
               somaN=(somaN+contagem);
               contagem++;
           }
           printf("A soma dos %d primeiros inteiros é %d.", nPrimeiro, somaN);
}
void somaPares(){

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
}
void diaDaSemana(){
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
   }
}
void pctgPessoas(){
     int idade=-2, quantMulheres=0, quantIdadeMulher=0, geral=0, maiorIdade=1;
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
}
void anoBisexto(){
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
}

int main(){
    setlocale(LC_ALL, "Portuguese"); //Junto da biblioteca locale.h, essa linha é para adicionar ç,~, etc
    int choise=1; //iniciar variavel com valor para ficar certin

    do{
        printf("\n\tMenu de cursos.\n\n");
        printf("1. Gestão de TI.\n");
        printf("2. Análise e desenvolvimento de sistemas.\n");
        printf("3. Segurança da informaçã.\n");
        printf("4. Media e aprovação do aluno\n");
        printf("5. Diferença maior e menor\n");
        printf("6. Aprovação ADS.\n");
        printf("7. Calculadora. \n");
        printf("8. Calcullo de combustivel.\n");
        printf("9. Calculo de media semestral.\n");
        printf("10. Primeiros n numeros impares.\n");
        printf("11. Soma dos N primeiros inteiros.\n");
        printf("12. Soma dos primeiros pares até N.\n");
        printf("13. Dia da semana\n");
        printf("14. Porcentagem de pessoas do sexo feminino\n");
        printf("15. Aniversario no ano bisexto\n");

        scanf("%d", &choise);
        system("cls || clear"); //cls para limpar o terminal em windows e clear para limpar em linux

        switch(choise){

        case 1:
            gestaoTI();
            break;

        case 2:
            ADS();
            break;

        case 3:
            infoSecurity();
            break;
        case 4:
            mediaAprov();
            break;
        case 5:
            diffMaiorMenor();
            break;
        case 6:
            aprovADS();
            break;
        case 7:
            calculadora();
            break;
        case 8:
            calcCombustivel();
            break;
        case 9:
            calcSemestral();
            break;
        case 10:
            numerosImpares();
                break;
            case 11:
                nPrimeiros();
                    break;
            case 12:
                somaPares();
                break;
            case 13:
                diaDaSemana();
                break;
            case 14:
                pctgPessoas();
                break;
            case 15:
                anoBisexto();
                break;

        default:
            system("cls || break");
            printf("\n\nVocê não escolheu uma opção valida.");
            break;
        }
    }while(choise);
}
