#include<stdio.h>
#include<math.h>

int fatorial(int x){
	if(x==0){
		return(1);
	}
	else return x*fatorial(x-1);
	
	
}
int main(){
int x,fat;
scanf("%i",&x);
printf("O fatorial de %i eh: %i \n",x,fatorial(x));

}
