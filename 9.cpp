/*9. Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem, utilizando-se um autom�vel
que faz N Km por litro. Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto e a velocidade m�dia
da viagem. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA ? TEMPO *
VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combust�vel utilizada na
viagem com a f�rmula: LITROS_USADOS ? DISTANCIA /N. O programa em C dever� apresentar os valores da
dist�ncia percorrida e a quantidade de litros utilizados na viagem*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042


#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float km_litro, tempo, vel, dist, litros;
	while(1){
		printf("Entre com tempo(horas) da viagem e a velocidade m�dia (km/h):");
		scanf("%f%f",&tempo,&vel);
		dist= tempo*vel;
		printf("Km por litro do autom�vel:");
		scanf("%f",&km_litro);
		litros = dist/km_litro;
		printf("Quantidade de litros utilizados: %.2f\n",litros);
	}
	return 0;
}
