#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");

float n1, n2, soma, subtracao;

printf("Por favor, insira dois algarismos: \n");
scanf("%f %f", &n1, &n2);	

soma = (n1 + n2);
subtracao = (n1 - n2);


if ( n1 > n2 ){
	printf("A soma dos algarismos é de: \n%.2f", soma);
}
	else if ( n1 < n2 ){
		printf("A subtração dos algarismos é de: \n%.2f", subtracao);
	}
	
	return 0;
}
