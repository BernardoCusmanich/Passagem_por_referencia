#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, vetor[3], aux, i, j;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    vetor[0] = n1;
    vetor[1] = n2;
    vetor[2] = n3;
    vetor[3] = n4;

    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("a ordem correta eh: %d, %d, %d, %d\n", vetor[0], vetor[1], vetor[2], vetor[3]);
}
