/*27 Gere um n�mero aleat�rio entre 0 e 19. Receba um n�mero informado pelo usu�rio at� que ele acerte o
n�mero aleat�rio gerado. Apresente quantas tentativas foram necess�rias. Para gerar um n�mero aleat�rio:*/
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
		printf("N�mero da sorte:");
		scanf("%d",&num);
		cont++;
	}while(num!=numAleatorio);
	printf("Voc� acertou em %d tentativas :) \n",cont);
	return 0;
}
