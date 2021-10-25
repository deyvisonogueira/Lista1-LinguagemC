/*Crie um programa que receba 2 valores e um operador aritmético básico (+ - * /) e apresente o resultado
do cálculo. Utilize switch case*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
int opcao,num1,num2;
do
{
printf("\t\t\nEscolha sua operação\n");
printf("0. Sair\n");
printf("1. Somar\n");
printf("2. Subtrair\n");
printf("3. Multiplicar\n");
printf("4. Dividir\n");

printf("Opção: ");
scanf("%d", &opcao);

printf("Escolha um número: ");
scanf("%d", &num1);

printf("Escolha outro número: ");
scanf("%d", &num2);

switch( opcao )
{
case 0:
system("cls || clear");
printf("Saindo do menu...\n");
break;
case 1:
system("cls || clear");
printf("%d + %d = %d \n", num1, num2, num1 + num2);
break;
case 2:
system("cls || clear");
printf("%d - %d = %d \n", num1, num2, num1 - num2);
break;
case 3:
system("cls || clear");
printf("%d * %d = %d", num1, num2, num1 * num2);
break;
case 4:
system("cls || clear");
printf("%d / %d = %d", num1, num2, num1 / num2);
break;
default:
system("cls || clear");
printf("Opcao invalida! Tente novamente.\n");
}
} while(opcao)
		
				
		
}
