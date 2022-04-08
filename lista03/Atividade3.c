#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double fat(int n)
{
	int i = 0;
	
	double fat = 1;
	for (i = n; i > 1; i--)
	{
		fat = fat * i;
	}	
	return fat;
}
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	double calculo, radiano, num;
	int pote, numI, i = 0; 

	printf("Digite um n�mero real em graus: ");
	scanf("%lf", &num);	
	printf("Digite um n�mero inteiro e positivo: ");
	scanf("%d", &numI);
	
	radiano = (num * M_PI)/180;

	while(numI > i)
	{
		calculo += pow(-1, i) * pow(radiano, pote) / fat(pote);	
		pote+=2;
		i++;
	}
	printf("\nO valor do coseno �: %lf", calculo);
	printf("\nCoseno de %.0lf� na biblioteca MATH.H �: %lf", num, cos(num));
	printf("\nA diferen�a entre o valor calculado e o valor da fun��o COS(X): %lf ", calculo - cos(num));
	return 0;
}
