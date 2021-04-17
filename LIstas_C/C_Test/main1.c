#include<stdio.h>
int main()
{
int i,j,x,y;

printf("Introduza uma Altura Valida""\n");
scanf("%d", &x);
printf("Introduza uma Largura Valida""\n");
scanf("%d", &y);

for(j=0; j< x; j++){
  for(i=0; i< y; i++){
    printf("*");
  }
  printf("\n");
}
}