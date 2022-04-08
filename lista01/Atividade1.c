#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

/*Fa�a um algoritmo para ler e imprimir tr�s n�meros. Se o primeiro for 
positivo, imprimir sua raiz quadrada, caso contr�rio, imprimir o seu 
quadrado; se o segundo n�mero for maior que 10 e menor que 100, 
imprimir a mensagem : �N�mero entre 10 e 100. Intervalo permitido�; se o 
terceiro n�mero for menor que o segundo, calcular e imprimir a diferen�a 
entre eles, caso contr�rio, calcular e imprimir a soma deles*/	
	

float n1, n2, n3, raiz, quadrado, diferenca, soma;

printf("Informe tres numeros: \n");
scanf("%f %f %f", &n1, &n2, &n3);

diferenca = n2 - n3;
soma = n2 + n3;

if (n1 < 0){
	quadrado = (n1 * n1);
	printf("\nO quadrado do primeiro n�mero �: %.2f", quadrado);
}
       
	
if (n1 > 0){
	raiz = sqrt (n1);
	printf("\nA raiz do primeiro n�mero �: %.2f", raiz);
}
      

if (n2 > 10 && n2 < 100){
	printf("\nNumero entre 10 e 100. Intervalo permitido");
}

if ( n3 < n2 ){
     printf("\nA diferen�a � de: %.2f", diferenca);
}

if ( n3 > n2 ){
	printf("\nA soma � de: %.2f", soma);
}

	return 0;
}
