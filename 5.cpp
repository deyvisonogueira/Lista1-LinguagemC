/*5. Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
? O n�mero digitado ao quadrado � A raiz quadrada do n�mero digitado*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	int num;
	setlocale(LC_ALL,"Portuguese");
	printf("\tInforme um n�mero ",num);
	scanf("%i",&num);
	if (num>0)
    printf("\ntA raiz quadrado do n�mero �:%f2.2",sqrt(num));
    printf("\n\tO quadrado do n�mero �:%2.2f",pow(num,2)); 	
    printf("\n\n");
    system("pause");
    
    return(0);
	
}
