#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float n1, n2, n3, maior;

printf("Digite tres digitos: \n");
scanf("%f %f %f", &n1, &n2, &n3);

maior = n1;


if ( maior < n2 )
       maior = n2;
if ( maior < n3 )
       maior = n3;
	
printf("O maior algarismo foi: %.2f", maior);
	return 0;
}
