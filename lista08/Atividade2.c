#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
 Dizemos que uma matriz quadrada inteira � um quadrado m�gico se a 
soma dos elementos de cada linha, a soma dos elementos de cada coluna 
e a soma dos elementos das diagonais principal e secund�ria s�o todas iguais 
Dada uma matriz quadrada Anxn , verificar se A � um 
quadrado m�gico.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int somaL = 0;
	int somaC = 0;
	int somaD = 0, somaDinv = 0;
	int i, j;
	int num;
	
	printf("\nESTUDO SOBRE QUADRADOS M�GICOS EM MATRIZES\n");
	printf("\n");
	printf("Escolha o tamanho da matriz: ");
	scanf("%d", &num);
	printf("\n");
	
	int matriz[num][num];
	
	for(i = 0; i < num; i++)
	{
		for(j = 0; j < num; j++)
		{
			printf("Insira os valores da matriz [%d][%d]: ", i+1, j+1);
			scanf("%d",&matriz[i][j]);
		}	
	}
	
	for(i = 0; i < num; i++)
	{
		somaL += matriz[0][i];
	}
	
	for(i = 0; i < num; i++)
	{
		somaC += matriz[i][0];
	}
	
	for(i = 0; i < num; i++)
	{
		somaD += matriz[i][i];
		somaDinv += matriz[num-i-1][i];	
	}
	if(somaL == somaC && somaL == somaD && somaL == somaDinv)
	{
		printf("\nA matriz digitada � um quadrado m�gico!");
	}
	else
	{
		printf("\nA matriz digitada n�o � um quadrado m�gico!");
	}
	return 0;
}
