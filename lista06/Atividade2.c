#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 6

/* Faça um programa que receba 6 números inteiros e mostre: 
a. Os números pares digitados; 
b. A soma dos números pares digitados; 
c. Os números ímpares digitados; 
d. A quantidade de números ímpares digitados; */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, num[vet], pares, impares, conti, soma;
	
	printf("\tInsira 6 números para realizar a analise\n");
	
	for(i = 0; i < vet; i++ )
	{
		printf("\nInforme o %dº número da sequência: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("\nOs números pares digitados:\n");
	for(i = 0; i < vet; i++)
	{
		pares = num[i] % 2;
		if(pares == 0 && num[i] != 0)
		{
			soma = num[i] + num[i];
			printf("- %d\n", num[i]);
		}
	}
	printf("\nA soma deles é: %d\n", soma);
	
	printf("\nOs números impares digitados:\n");
	for(i = 0; i < vet; i++)
	{
		impares = num[i] % 2;
		if(impares != 0)
		{
			conti++;
			printf("- %d\n", num[i]);
		}
	}
	printf("\nForam digitados %d números impares!", conti-1);
	

	

	
	return 0;
}
