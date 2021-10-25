/*21. A série de Fibonacci é formada pela sequência:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo informado pelo usuário*/
//DEYVISON NOGUEIRA DE OLIVEIRA RA:20211940042
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
char *c;
system("color e");
setlocale(LC_ALL,"portuguese");
int a = 1, b = 1,n, i;
printf("\tDigite o Nésimo termo: ");
scanf("%d", &n);
printf("\n");
for(i=0;i<n;i++) {
if(i % 2 == 0) {
printf("%d ", a);
a += b;
} else {
printf("%d ", b);
b += a;
}
}
return 0;
}
