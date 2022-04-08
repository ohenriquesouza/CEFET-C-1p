#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");	
	
	
	float i, numID, peso, maispesado = 0, maismagro =0;
	
	for(i = 0; i<=10;i++){
		
		printf("\nInforme por favor o número de identificação do boi: \n");
		scanf("%f", &numID);
		
		printf("\nAgora, insira o peso do boi: ");
		scanf("%f", &peso);
		
		if (i == 0 || maismagro > peso){
	   maismagro = peso;
	}

		else if ( i == 0 || maispesado < peso){
	 maispesado = peso;
	}
	}
		printf("\nO boi selecionado foi o %.2f", numID);
		printf("\nO bois mais gordo pesa: %.2f\n", maispesado);
		printf("\nEnquanto o boi mais magro pesa: %.2f\n", maismagro);
	
	return 0;
}
