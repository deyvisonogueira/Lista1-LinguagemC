/*2. Fa�a um programa em C para efetuar a convers�o de um valor dado em Mbps para Kbps*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	int Mbps,Qtd_dados;
	printf("\tInforme a quantidade de Mbps: ");
	scanf("%i",&Mbps);
	printf("\tA a quantidade de dados em Kbps: ");
	Qtd_dados=Mbps*1024;
	printf("%i",Qtd_dados,Mbps);					
	
	return 0;
	
}
