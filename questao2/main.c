#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, aux, i;

    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &a);
    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &b);
    printf("O valor da primeira variavel eh: %d\n", a);
    printf("O valor da segunda variavel eh: %d\n", b);

    for (i = 0; i < 1; i++)
    {
        aux = a;
        a = b;
        b = aux;
    }

    printf("a primeira variavel agora eh: %d\n", a);
    printf("a segunda variavel agora eh: %d\n", b);

    return 0;
}
