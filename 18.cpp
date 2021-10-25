/* 18. Escrever a tabuada de multiplicação do um número lido na tela.*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, i;
i = 0;
printf("Digite um número. \n");
scanf("%d", &num);
while (i < 10){
i++;
printf("\n %4d X %2d = %4d", num, i, i * num);
}
printf("\n\n\n");
system("PAUSE");
		
}
