#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
/*Leia o saldo de uma aplica��o e imprima o novo saldo, considerado o reajuste 
de 1% */

float saldo, resultado;

printf("Informe o saldo da aplica��o: R$");
scanf("%f", saldo);
	
resultado = (saldo * 0.01);

printf("O valor com o reajuste e: %f", resultado);	


	return 0;
}
