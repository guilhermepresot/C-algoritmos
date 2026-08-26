#include<stdio.h>
#include<math.h>
int i,op;

void main()
{
	do
	{
	int delta=0,a=0,b=0,c=0,num=0,fac=1;
	float x1,x2;	
	system("cls");
	
	printf("Escolha uma opcao: \n [1] resolver uma equac 2 \n [2] calcular fatorial; \n [3] sair. \n");
	scanf("%i",&op);
   
		switch(op)
		{
		case 1: printf("digite os valores de a, b e c respectivamente: ");
				scanf("%i %i %i",&a,&b,&c);
				delta= (b*b)-4 * a *c;
				x1=(-b+sqrt(delta))/(2*a);
				x2=(-b-sqrt(delta))/(2*a);
				printf("\n Os valores das raizes sao: %.2f e %.2f \n",x1,x2);
				system("pause");
				break;
				
					case 2: printf("Digite o numero para o fatorial \n");
					scanf("%i",&num);
					for(i=num;i>1;i--)
				    {	
				    fac=fac*i;
				    }
				    printf("O fatorial do numero: %i eh: %i \n",num,fac);
				    system("pause");
				    break;
				    		default: printf("Opcao nao encontrada");
				    		break;
				    			case 3: break; }
								
		 
				
		
		
		
		
		}while(op<3);
	
	
	
}
