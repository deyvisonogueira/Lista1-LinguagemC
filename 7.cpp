/*7. Um reality show realizou uma prova onde os participantes tinham que buscas bolas de 3 cores diferentes, e
de acordo com a tabela abaixo cada um teria uma pontuação:
? Bola Verde: 10 pontos
? Bola amarela: 5 pontos
? Bola branca: 3 pontos
Construa um programa em C que leia a quantidade de bolas de cada cor e apresente a pontuação final do
participante*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("color e");
	int bola_verde,bola_amarela,bola_branca,total_pts;
	printf("Informe a quantidade de bolas verders que o participante obteve: ", bola_verde);
	scanf("%d",&bola_verde);
	printf("Informe a quantidade de bolas amarelas o participante obteve: ", bola_amarela);
	scanf("%d",&bola_amarela);	
	printf("Informe a quantidade de bolas brancas o participante obteve: ", bola_branca);
	scanf("%d",&bola_branca);	
	total_pts=bola_verde*10+bola_amarela*5+bola_branca*3;
	printf("A pontuação do participante é: %d", total_pts);
	
	return 0;
	
}


