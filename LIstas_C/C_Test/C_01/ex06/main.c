#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *str;

    str = "Hello World";
    printf("total de caracteres: %i\n",ft_strlen(str));
}