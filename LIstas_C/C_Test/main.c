#include<stdio.h>
int main()
{

	int i,x,y;

	printf("Introduza uma Altura Valida\n");
	scanf("%d",&x);
	printf("Introduza uma Largura Valida\n");
	scanf("%d",&y);

	for(i = 0; i< y; i++)
	printf("*");

	//for(i = 0; i< x; i++)
	//printf("*");
}