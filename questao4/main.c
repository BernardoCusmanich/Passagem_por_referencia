#include <stdio.h>
#include <stdlib.h>

void soma(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    soma(n1, n2);
    return 0;
}

void soma(int n1, int n2)
{
    if (n1 < 0 && n2 < 0)
    {
        n1 = -n1;
        n2 = -n2;
    }
    if (n1 < 0)
    {
        n1 = -n1;
        printf("-");
    }
    if (n2 < 0)
    {
        n2 = -n2;
        printf("-");
    }
    printf("%d\n", n1 + n2);
}
