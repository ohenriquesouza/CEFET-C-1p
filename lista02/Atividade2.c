#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Um determinado material radioativo perde metade de sua massa a cada 
50 segundos. Este tempo é chamado na físico-química de MEIA-VIDA. 
Dada a massa inicial, em gramas, faça um algoritmo que determine o 
tempo necessário para que essa massa se torne menor que 0.5 gramas. 
Ao final do algoritmo escreva a massa inicial e o tempo calculado em 
horas, minutos e segundos.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	float peso, pesoI;
	int i, horas, minutos, segundos;

	printf("Determine o peso do material: ");
	scanf("%f", &pesoI);
	peso = pesoI;

	for (i = 0; peso >= 0.5; i++){
		peso /= 2;
	}
	i *=50;
	
	horas = (i / 3600);
	minutos = (i / 60);
	segundos = (i % 60);	
	
	printf("\nO peso inical do material era de: %.2f\n", pesoI);
	printf("\nO tempo de meia-vida foi de: %d horas, %d minutos e %d segunos\n", horas, minutos, segundos);
	
	
	return 0;
}
