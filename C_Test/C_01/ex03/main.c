#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a;
    int b;
    int x;
    int y;
    int *div;
    int *mod;

    x = 0;
    y = 0;
    a = 8787;
    b = 10;

    div = &x;
    mod = &y;


    ft_div_mod(a, b, div, mod);

    printf("valor de a %i\n",a);
    printf("valor de b %i\n",b);
    printf("valor da divisao  %i\n", *div);
    printf("valor do resto    %i\n", *mod);

}
