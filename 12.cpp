/* 12. Construa um programa em C que determine (imprima) se um dado número N inteiro (recebido através do
teclado) é PAR ou ÍMPAR. (Usar o operador resto: Ex: N%2)).*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
    int main(){
    	setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
    system("color e");
    int numero;
	printf("\tMostrar se o nÚmero é par ou ímpar\n");
	printf("\tEntrar com um numero\t: =  ");
	scanf("%i",&numero);
	if (numero % 2==0)
	    printf("\tO número %i é par",numero);
	else{
		printf("\tO nÚmero %i é impar",numero);
		
	}
	}
	
