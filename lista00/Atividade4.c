#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
float celcius, fahrenheit;

printf("Informe por favor a temperatura em Celcius: ");
scanf("%f", &celcius);	
	
	
fahrenheit = (((celcius * 9) + 160)/ 5);

printf("Em Fahrenheit a temperatura é de: %.2f",fahrenheit);

	return 0;
}
