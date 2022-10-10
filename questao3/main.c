#include <stdio.h>
#include <stdlib.h>

void fracao(int n, int d);

int main()
{
    int n, d, mdc;
    printf("Digite o numerador: ");
    scanf("%d", &n);
    printf("Digite o denominador: ");
    scanf("%d", &d);
    fracao(n, d);
    return 0;
}

void fracao(int n, int d)
{
    if (d == 0)
    {
        printf("Erro: divisao por zero\n");
        return;
    }
    if (n == 0)
    {
        printf("0\n");
        return;
    }
    if (n < 0 && d < 0)
    {
        n = -n;
        d = -d;
    }
    if (n < 0)
    {
        n = -n;
        printf("-");
    }
    if (d < 0)
    {
        d = -d;
        printf("-");
    }
    int fracao = fracao(n, d);
    printf("%d/%d\n", n / d);
}
