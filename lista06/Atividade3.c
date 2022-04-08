#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 15

/* Fa�a um programa que leia um vetor de 15 posi��es e o compacte, ou seja, 
elimine as posi��es com valor zero. Para isso, todos os elementos � frente do 
valor zero, devem ser movidos uma posic�o para tr�s no vetor. Assim, ao fim 
da execu��o do exerc�cio para o vetor abaixo: */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, j, aux, num[vet], pos, vetOrdenado[vet];
	
	for(i = 0; i < vet; i++)
	{
		printf("Informe o %d� valor da sequ�ncia: ", i+1);
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
