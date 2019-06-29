#include<stdio.h>

#define MAX 4
int busca(int vetor[],int ini,int fim,int pesq)
{
 while(ini<=fim)
 {
  int meio;
  meio=(ini+fim)/2;
  if(vetor[meio]==pesq)
  {
    return meio;
  }
  else if (vetor[meio]<pesq)
  {
    return busca(vetor,meio+1,fim,pesq);
  }
  else
  {
   return busca(vetor,ini,meio-1,pesq);
  }
 }
 return -1;

}
int main (void)
{
 int vetor[MAX]={1,4,5,10},fun,x;
 printf("Digite o valor a ser buscado:\n ");
 scanf("%d",&x);
 fun = busca(vetor,0,MAX-1,x);
 printf("%d",fun);
 printf("\n\n");
 return 0;
}
