#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 5


/* Escrever um programa que leia os elementos de um vetor de 15 posições, um de 
cada vez. O programa calcula a média aritmética dos elementos do vetor e 
determina quais elementos do vetor são menores que a média. Ao fim, o programa 
deve imprimir os elementos menores e suas posições. Caso não seja encontrado 
nenhum elementos menor que a média, o usuário deve ser notificado através de uma 
mensagem. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, num[vet], somatorio = 0, contMedia = 0; 
	float media = 0;
	
	for(i = 0; i < vet; i++ )
	{
		printf("\nInsira o %dº valor dos números: ", i+1);
		scanf("%d", &num[i]);
		somatorio = somatorio + num[i];
	}
	
	media = somatorio/vet;
	printf("\nMédia = %.2f\n", media);
	
	for(i = 0; i < vet; i++)
	{
		if(num[i] < media){
			printf("\nNúmero inferior a média calculada: %d", num[i]);
			printf("\nO número %d, se encontra %dª posição\n", num[i], i+1);
			contMedia++;
		}
	}
	
	if (contMedia == 0)
	{
		printf("\nNão foram detectados números inferiores a média!");
	}	
		
	return 0;
}
