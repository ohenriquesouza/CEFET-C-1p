#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Calcule o valor de uma prestação em atraso, utilizando a fórmula: 
PRESTAÇÃO = VALOR + (VALOR * (TAXA/100) * TEMPO).
O usuário deve informar o valor da prestação, a taxa e o tempo em 
atraso */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
	
float valor, taxa, tempo, resultado;

printf("Digite, por favor, o valor da parcela: R$");
scanf("%f", &valor);

printf("Digite agora, o valor da taxa cobrada: R$");
scanf("%f", &taxa);

printf("Informe o tempo em atraso (em meses): ");
scanf("%f", &tempo);	
	

resultado = (valor + (valor *(taxa / 100)*tempo));
	
printf("O valor que devera ser pago é: R$%.2f", resultado);
	
	
	return 0;
}
