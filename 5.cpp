/*5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
? O número digitado ao quadrado • A raiz quadrada do número digitado*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	int num;
	setlocale(LC_ALL,"Portuguese");
	printf("\tInforme um número ",num);
	scanf("%i",&num);
	if (num>0)
    printf("\ntA raiz quadrado do número é:%f2.2",sqrt(num));
    printf("\n\tO quadrado do número é:%2.2f",pow(num,2)); 	
    printf("\n\n");
    system("pause");
    
    return(0);
	
}
