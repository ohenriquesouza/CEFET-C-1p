#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 6

/* Fa�a um programa que receba 6 n�meros inteiros e mostre: 
a. Os n�meros pares digitados; 
b. A soma dos n�meros pares digitados; 
c. Os n�meros �mpares digitados; 
d. A quantidade de n�meros �mpares digitados; */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, num[vet], pares, impares, conti, soma;
	
	printf("\tInsira 6 n�meros para realizar a analise\n");
	
	for(i = 0; i < vet; i++ )
	{
		printf("\nInforme o %d� n�mero da sequ�ncia: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("\nOs n�meros pares digitados:\n");
	for(i = 0; i < vet; i++)
	{
		pares = num[i] % 2;
		if(pares == 0 && num[i] != 0)
		{
			soma = num[i] + num[i];
			printf("- %d\n", num[i]);
		}
	}
	printf("\nA soma deles �: %d\n", soma);
	
	printf("\nOs n�meros impares digitados:\n");
	for(i = 0; i < vet; i++)
	{
		impares = num[i] % 2;
		if(impares != 0)
		{
			conti++;
			printf("- %d\n", num[i]);
		}
	}
	printf("\nForam digitados %d n�meros impares!", conti-1);
	

	

	
	return 0;
}
