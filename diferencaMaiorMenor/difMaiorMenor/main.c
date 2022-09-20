#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb1;
    int numb2;
    int diff;

    printf("Digite o primeiro inteiro: ");
    scanf("%d", &numb1);
    printf("Digite o segundo inteiro: ");
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
    printf("A diferença entre %d e %d é %d", numb1, numb2, diff);
    return 0;

}
