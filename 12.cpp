/* 12. Construa um programa em C que determine (imprima) se um dado n�mero N inteiro (recebido atrav�s do
teclado) � PAR ou �MPAR. (Usar o operador resto: Ex: N%2)).*/
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
	printf("\tMostrar se o n�mero � par ou �mpar\n");
	printf("\tEntrar com um numero\t: =  ");
	scanf("%i",&numero);
	if (numero % 2==0)
	    printf("\tO n�mero %i � par",numero);
	else{
		printf("\tO n�mero %i � impar",numero);
		
	}
	}
	
