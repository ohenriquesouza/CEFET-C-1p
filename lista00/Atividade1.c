#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Calcule o valor de uma presta��o em atraso, utilizando a f�rmula: 
PRESTA��O = VALOR + (VALOR * (TAXA/100) * TEMPO).
O usu�rio deve informar o valor da presta��o, a taxa e o tempo em 
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
	
printf("O valor que devera ser pago �: R$%.2f", resultado);
	
	
	return 0;
}
