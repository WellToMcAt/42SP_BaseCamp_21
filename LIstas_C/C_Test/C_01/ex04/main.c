#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a;
    int b;
    int *pa = &a;
    int *pb = &b;

    a = 9;
    b = 4;
    printf("valor do conteudo de a %i\n",*pa);
    printf("valor do conteudo de b %i\n",*pb);
    ft_ultimate_div_mod(pa, pb);
    printf("valor divisao de a e b %i\n",*pa);
    printf("valor resto div  a e b %i\n",*pb);

}
