/*8. O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 25% e os
impostos de 42%, escrever um programa em C que receba o custo de f�brica de um carro e escreva o custo
ao consumidor*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("color e");
	float valor_carro_novo,valor_de_fabrica,valor_consumidor;
	printf("\tValor do carro R$ :",valor_carro_novo);
	scanf("%f",&valor_carro_novo);
	valor_de_fabrica=valor_carro_novo*142/100;
	printf("\tValor do carro de f�bria �: %f", valor_de_fabrica);
	valor_consumidor=valor_carro_novo*167/100;
	printf("\t\nO valor do carro para o consumidor �: %f", valor_consumidor);
	
	return 0;
}
