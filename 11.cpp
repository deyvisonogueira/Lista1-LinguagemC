/*11. Crie um programa em C que leia a idade de uma pessoa e informe a sua classe eleitoral:
- n�o eleitor (abaixo de 16 anos);
- eleitor obrigat�rio (entre a faixa de 18 e menor de 65 anos);
- eleitor facultativo (de 16 at� 18 anos e maior de 65 anos, inclusive)*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
int idade; 
printf("\tdigite a sua idade! \n");
scanf("%d",&idade);
if(idade>=16 && idade<18 ||idade>=65){
printf("\tvoto facultativo! \n");	
}	
else{
idade = (idade>=18 && idade<65)?
printf("\tvoto obrigat�rio! \n"):
printf("\tN�o vota! \n");
}

}
