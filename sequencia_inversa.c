#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j;
	int N;
	printf("Quantos numeros tem? ");
	scanf("%i",&N);
	int inv[N];    	
   for(i=0;i<N;i++)
       {
           scanf("%i",&inv[i]);
       }
    printf("A sequencia em ordem inversa eh: ");
    for(j=N-1;j>=0;j--)
        {
            printf("%i ",inv[j]);
        }

    return 0;
}
