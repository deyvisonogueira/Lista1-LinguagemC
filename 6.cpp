/*6 Fa�a um programa que receba dois n�meros e mostre qual deles � o maior*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2;
	printf("\tInforme o primeiro n�mero: " , num1);
	scanf("%i",&num1);
	printf("\tInforme o segundo n�mero:  " , num2);
	scanf("%i",&num2);
	if (num1>num2)
	printf("\tO primeiro n�mero � maior %i");
	else
	printf("\tO segundo n�mero � maior");
	
	return 0;
	
}
