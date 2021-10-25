/*6 Faça um programa que receba dois números e mostre qual deles é o maior*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2;
	printf("\tInforme o primeiro número: " , num1);
	scanf("%i",&num1);
	printf("\tInforme o segundo número:  " , num2);
	scanf("%i",&num2);
	if (num1>num2)
	printf("\tO primeiro número é maior %i");
	else
	printf("\tO segundo número é maior");
	
	return 0;
	
}
