#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 5


/* Escrever um programa que leia os elementos de um vetor de 15 posi��es, um de 
cada vez. O programa calcula a m�dia aritm�tica dos elementos do vetor e 
determina quais elementos do vetor s�o menores que a m�dia. Ao fim, o programa 
deve imprimir os elementos menores e suas posi��es. Caso n�o seja encontrado 
nenhum elementos menor que a m�dia, o usu�rio deve ser notificado atrav�s de uma 
mensagem. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, num[vet], somatorio = 0, contMedia = 0; 
	float media = 0;
	
	for(i = 0; i < vet; i++ )
	{
		printf("\nInsira o %d� valor dos n�meros: ", i+1);
		scanf("%d", &num[i]);
		somatorio = somatorio + num[i];
	}
	
	media = somatorio/vet;
	printf("\nM�dia = %.2f\n", media);
	
	for(i = 0; i < vet; i++)
	{
		if(num[i] < media){
			printf("\nN�mero inferior a m�dia calculada: %d", num[i]);
			printf("\nO n�mero %d, se encontra %d� posi��o\n", num[i], i+1);
			contMedia++;
		}
	}
	
	if (contMedia == 0)
	{
		printf("\nN�o foram detectados n�meros inferiores a m�dia!");
	}	
		
	return 0;
}
