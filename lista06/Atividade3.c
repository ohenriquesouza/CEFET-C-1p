#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 15

/* Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, 
elimine as posições com valor zero. Para isso, todos os elementos à frente do 
valor zero, devem ser movidos uma posicão para trás no vetor. Assim, ao fim 
da execução do exercício para o vetor abaixo: */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, j, aux, num[vet], pos, vetOrdenado[vet];
	
	for(i = 0; i < vet; i++)
	{
		printf("Informe o %dº valor da sequência: ", i+1);
		scanf("%d", &num[i]);
	}
	for (i = 0; i  < vet; i++)
	{
		for(j = i; j < vet; j++)
		{
			if(num[i] == 0)
			{
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}
	for(i = 0; i < vet; i++)
	{
		printf("\nVetor[%d]: %d", i+1,num[i]);
	}
	return 0;
}
