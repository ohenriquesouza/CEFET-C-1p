#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float combustivel, i, contA=0, contG=0, contd=0, total;
	
	for(i = 0; i = 4; i++){
		printf("\nPor favor, informe com qual combustivel deseja abastercer:\n(1)-�lcool\n(2)-Gasolina\n(3)Diesel\n(4)-Fim\n");
		scanf("%f",&combustivel);
		
		if (combustivel == 1){
			contA++;
			printf("Voc� escolheu �lcool.\n");
		}
		if (combustivel == 2){
			contG++;
			printf("Voc� escolheu Gasolina.\n");
		}
		if (combustivel == 3){
			contd++;
			printf("Voc� escolheu Diesel.\n");
		}
		if (combustivel == 4){
			printf("\n\tMUITO OBRIGADO.\n");
			break;
		}
		if (combustivel > 4){
			printf("\nC�digo Inv�lido, por favor, repita o processo.\n");
		}
	}
	total = contA + contG + contd;
		printf("\n\tO total de pessoas que asbasteceram com �lcool foi de: %.0f\n", contA);
		printf("\n\tO total de pessoas que asbasteceram com Gasolina foi de: %.0f\n", contG);
		printf("\n\tO total de pessoas que asbasteceram com Diesel foi de: %.0f\n", contd);
		printf("\n\tO n�mero total de clientes no dia foi de: %.0f\n", total);
			
	return 0;
}
