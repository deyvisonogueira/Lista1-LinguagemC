/*26. Freitas tem 1,50m e cresce 1 cent�metros por ano, enquanto Russo tem 1,40m e cresce 2 cent�metros por
ano. Construir um programa que calcule iterativamente e imprima quantos anos ser�o necess�rios para que
Russo seja maior que Freitas, considerando que ambos nunca param de crescer*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
   setlocale(LC_ALL,"Portuguese");
   float Freitas=1.5,Russo=1.1;
   int tempo_anos=0;
   while (Freitas>Russo)
   {
    Freitas=Freitas+0.01;
    Russo=Russo+0.02;
    tempo_anos=tempo_anos+1;
   }
   printf("Levar� %d anos",tempo_anos);

   return 0;

}
