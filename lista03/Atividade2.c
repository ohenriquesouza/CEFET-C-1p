#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float x1, x2, y1, y2, coordenada, distancia;
	
	do
	{
		printf("\nInforme o valor X para P: ");
		scanf("%f", &x1);
		printf("\nInforme o valor Y para P: ");
		scanf("%f", &y1);
		printf("\nInforme o valor X para Q: ");
		scanf("%f", &x2);
		printf("\nAgora, o valor Y para Q: ");
		scanf("%f",&y2);
		distancia = sqrt(pow (x2 - x1,2) + pow (y2 - y1 ,2));
		printf("\nDistancia dos pontos calculada foi de: %.2f", distancia);
		
	}while (distancia != 0);
	
	return 0;
}
