#include <stdio.h>
#include <stdlib.h>

void vet(float v[], int n);

int main()
{
    int i;
    float v[10];
    vet(v, 10);
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &v[i]);
    }
    return 0;
}

void vet(float v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &v[i]);
    }
}
