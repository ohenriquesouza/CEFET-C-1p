#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
/*Faça um algoritmo que lê o número de um funcionário, seu número de horas 
trabalhadas e o valor que recebe por hora e calcula o salário deste 
funcionário*/	
 float num, horas, valor, salario;
 
 printf("Informe o seu número de funcionário: ");
 scanf("%f", &num);
 
printf("Agora, informe o número de horas trabalhadas: ");
scanf("%f", &horas);	
	
printf("Por fim, insira o valor de cada hora trabalhada: ");
scanf("%f", &valor);


salario = (horas * valor);
	
printf("A ficha do funcionário: %.2f", salario);

	return 0;
}
