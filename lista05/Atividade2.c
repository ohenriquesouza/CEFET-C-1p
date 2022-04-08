#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 15

/* Faça um programa que leia um vetor de 15 posições de números inteiros e divida 
todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int i = 0, maior, numeros[vet];
	float divisao;
	
	for(i = 0; i < vet; i++)
	{
		printf("Informe 15 números inteiros: ");
		scanf("%d", &numeros[i]);
	}
	
	maior = numeros[0];
	
	for(i = 0; i < vet; i++)
	{
		if(numeros[i] > maior)
		{
			maior = numeros[i];
		}
	}
	
	for(i = 0; i < vet; i++)
	{
		divisao = (float) numeros[i]/maior;
		printf("\nA divisão do maior número pelos numeros inseridos respectivamente foi de: %.2f", divisao);
	}
		
	return 0;
}
