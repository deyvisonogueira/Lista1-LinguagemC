/*1. Elaborar um programa em C que apresente o valor da convers�o em d�lar (US$) de um valor lido em real, o
programa deve solicitar a cota��o do d�lar e tamb�m a quantidade de reais dispon�vel com o usu�rio*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
    system("color e");
    float Cotacao_dolar,valor_disponivel_usuario,valor_conversao;
    printf("\tA cota��o do d�lar � = U$$ ",Cotacao_dolar);
	scanf("%f",&Cotacao_dolar);
	printf("\tO valor dispon�vel usuario � = R$ ",valor_disponivel_usuario);
	scanf("%f",&valor_disponivel_usuario); 
	valor_conversao = valor_disponivel_usuario/Cotacao_dolar;
	printf("\tO valor final da convers�o � = R$ %f ",valor_conversao);
	system("pause");
	
	
	return 0;
}

