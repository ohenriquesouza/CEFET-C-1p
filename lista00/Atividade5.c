#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
/*Fa�a um algoritmo que l� o n�mero de um funcion�rio, seu n�mero de horas 
trabalhadas e o valor que recebe por hora e calcula o sal�rio deste 
funcion�rio*/	
 float num, horas, valor, salario;
 
 printf("Informe o seu n�mero de funcion�rio: ");
 scanf("%f", &num);
 
printf("Agora, informe o n�mero de horas trabalhadas: ");
scanf("%f", &horas);	
	
printf("Por fim, insira o valor de cada hora trabalhada: ");
scanf("%f", &valor);


salario = (horas * valor);
	
printf("A ficha do funcion�rio: %.2f", salario);

	return 0;
}
