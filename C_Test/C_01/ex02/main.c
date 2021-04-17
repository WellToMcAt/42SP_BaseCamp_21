#include <stdio.h>

void 	ft_swap(int *a, int *b);

int 	main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 10;
	b = 20;
	pa = &a;
	pb = &b;
	printf("ANTES\n");
	printf("valor do pointeiro a %i\n", *pa);
	printf("valor do pointeiro b %i\n\n", *pb);
	ft_swap(pa, pb);
	printf("DEPOIS\n");
	printf("valor do pointeiro a %i\n", *pa);
	printf("valor do pointeiro b %i\n", *pb);
}
