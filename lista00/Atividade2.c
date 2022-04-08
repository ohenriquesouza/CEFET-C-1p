#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Leia 4 números e mostre a média ponderada, sabendo-se que os pesos são 
respectivamente: 1, 2, 3 e 4. */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");	
float n1, n2, n3, n4, resultado;

printf("Por favor, informe a primeira nota:\n");
scanf("%f", &n1);

printf("Por favor, informe a segunda nota:\n");
scanf("%f", &n2);

printf("Por favor, informe a terceira nota:\n");
scanf("%f", &n3);

printf("Por favor, informe a quarta nota:\n");
scanf("%f", &n4);

resultado = (((n1 * 1) + (n2 * 2) + (n3 * 3) + (n4 * 4))/ (1 + 2 + 3 + 4));

printf("A média ponderada é: %.2f\n", resultado);

	return 0;
}
