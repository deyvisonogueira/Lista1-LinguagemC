/*27 Gere um número aleatório entre 0 e 19. Receba um número informado pelo usuário até que ele acerte o
número aleatório gerado. Apresente quantas tentativas foram necessárias. Para gerar um número aleatório:*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int numAleatorio, num, cont=0;
	
	srand(time(NULL)); // inicializando o gerador de numeros
	numAleatorio = rand()%10;
	do{
		printf("Número da sorte:");
		scanf("%d",&num);
		cont++;
	}while(num!=numAleatorio);
	printf("Você acertou em %d tentativas :) \n",cont);
	return 0;
}
