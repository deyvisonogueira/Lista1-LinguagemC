/* Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
correspondente a este n�mero. Isto e, domingo se 1, segunda-feira se 2, e assim por diante*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
int valor;
printf ("Digite um valor de 1 a 7: ");
scanf("%i", &valor); 
switch(valor){
	
case 1:
printf ("Domingo\n");
break;

case 2:
printf ("Segunda\n");
break;

case 3:
printf ("Ter�a\n");
break;

case 4:
printf ("Quarta\n");
break;

case 5:
printf ("Quinta\n");
break;

case 6:
printf ("Sexta\n");
break;

case 7:
printf ("S�bado\n");
break;

default :
printf ("Valor invalido!\n");
}
return 0;

}
		


