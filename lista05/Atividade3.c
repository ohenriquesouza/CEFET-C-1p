#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 10
#include <math.h>

/* Escrever um programa que os elementos de um vetor de 10 posições, um de cada 
vez. O programa determina quantos elementos são positivos, nulos e negativos, e 
imprime essas informações. Para os elementos positivos, é calculado o valor da 
função f(x) = 2x – cos(x) para esses elementos. Deve ser impresso o valor do 
elemento positivo e o valor da função.  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int i, num[vet], contPositivo = 0, contNegativo = 0, contNulo = 0;
	float funcaox[i];
	
	for(i = 0; i < vet; i++)
	{
		printf("Insira o valor da posição de número %d do vetor: ", i+1);
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
			printf("\nA função de f(x) para (x) = %d dos números positivos inseridos teve como resultado: %.2f", num[i], funcaox[i]);	
		}	
	}
	printf("\n\nA contagem de númeors nulos foi: %d", contNulo);
	printf("\nA contagem de númeors negativos foi: %d", contNegativo);
	printf("\nA contagem de númeors positivos foi: %d", contPositivo);	
	return 0;
}
