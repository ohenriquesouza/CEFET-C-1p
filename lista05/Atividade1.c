#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define vet 5

/* Fa�a um programa que leia dois vetores (A e B) de cinco posi��es de n�meros 
inteiros. O programa deve, ent�o. subtrair o primeiro elemento de A do �ltimo de B, 
acumulando o valor, subtrair o segundo elemento de A do pen�ltimo de B, 
acumulando o valor e assim por diante. Mostre o resultado da soma de todas as 
subtra��es. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int j = 0,i = 0, a[vet], b[vet];
	float somatorio;
	
	for( i = 0; i < vet; i++ )
	{
	printf("Informe 5 valores para o vetor A: ");
	scanf("%d", &a[i]);
	}
	
	printf("\n");
	
	for (i = 0; i < vet; i++ )
	{
		printf("Informe 5 valores para o vetor B: ");
		scanf("%d", &b[i]);
	}
	
	for(i = 0, j = 4; i < vet ; i++, j--)
	{
		somatorio += a[i] - b[j];
	}
	
	printf("\nSomatorio de todas as subtra��es = %.2f", somatorio);
	
	return 0;
}
