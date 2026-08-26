#include<stdio.h>
#define MAX 50
int  i, qtd ;
int NUM[MAX];
int numaior(int total)
{
	int aux=NUM[0];
	for(i=0;i<total;i++)
	{
		if(NUM[i]>aux)
		{
			aux=NUM[i];
		}
			
			
		
	}
	return aux;
	
 } 
  int main()
  {
  	printf("Escreva o tamanho de seu vetor: ");
  	scanf("%i",&qtd);
  
  		printf(" \n Agora escreva os numeros: ");
  		for(i=0;i<qtd;i++)
  		{
  			scanf("%i",&NUM[i]);
		  }
		  printf("\n O maior numero eh: ",numaior(qtd));
		  return(0);
  	
  }
 
