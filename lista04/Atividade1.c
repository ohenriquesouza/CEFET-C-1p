#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define vet 21

/* Faça um algoritmo calcule o valor da função: y = f(x) + g(x), para para x = -10, -9, -8, -7, -
6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 onde: */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int i = 0, vetor[vet] ,valor = -10;
	int y = 0, h = 0, f = 0, g = 0, x = 0;
	float soma;
	
	for(i = 0; i < vet; i++ ){
		vetor[i] = valor;
		
		printf("\nValor de X: %d\n", valor);
		
		h = ( pow ( valor, 2 ) - 16);
		
		//printf("Valor de H(x): %d\n", h);
		
		if(h >= 0){
			f = h;
		}
		
		else {
			f = 1;
		}
		
		if (f >= 0){
			g = (pow (valor, 2) + 16);
		}
		
		else {
			g = 1;
		}
		
		y = f + g;
		
		printf("VALOR DE Y(x): %d\n", y);
		
		valor++;
		
		printf("-------------------------------------");
	}
	
	
	
	
	
	
	
	return 0;
}
