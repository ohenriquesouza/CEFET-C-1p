#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 10
#include <math.h>

/* Escrever um programa que os elementos de um vetor de 10 posi��es, um de cada 
vez. O programa determina quantos elementos s�o positivos, nulos e negativos, e 
imprime essas informa��es. Para os elementos positivos, � calculado o valor da 
fun��o f(x) = 2x � cos(x) para esses elementos. Deve ser impresso o valor do 
elemento positivo e o valor da fun��o.  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int i, num[vet], contPositivo = 0, contNegativo = 0, contNulo = 0;
	float funcaox[i];
	
	for(i = 0; i < vet; i++)
	{
		printf("Insira o valor da posi��o de n�mero %d do vetor: ", i+1);
		scanf("%d",&num[i]);
		
		if (num[i] == 0)
		{
			contNulo++;
		}
		else if (num[i] < 0)
		{
			contNegativo++;
		}	
	}	
	for(i = 0; i < vet; i++)
	{
		 if (num[i] > 0)
		{
			contPositivo++;	
			funcaox[i] = 2*(num[i]) - cos(num[i]);
			printf("\nA fun��o de f(x) para (x) = %d dos n�meros positivos inseridos teve como resultado: %.2f", num[i], funcaox[i]);	
		}	
	}
	printf("\n\nA contagem de n�meors nulos foi: %d", contNulo);
	printf("\nA contagem de n�meors negativos foi: %d", contNegativo);
	printf("\nA contagem de n�meors positivos foi: %d", contPositivo);	
	return 0;
}
