#include<stdio.h>
#include<math.h>

float soma, media;
int i,N;

void main()
{
	float notas[N];
	printf("Escreva a quantidade de alunos: ");
	scanf("%i",&N);
	
	for(i=0;i<N;i++)
	{
		printf("\nMedia do Aluno [%i]: ",i+1);
		scanf("%f", &notas[i]);
		soma=soma+notas[i];
	}
	media=(soma)/N;
	printf("\nA media da turma eh: %.2f",media);
}
