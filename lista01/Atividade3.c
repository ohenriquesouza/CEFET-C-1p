#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
/* Fa�a um algoritmo que l� o n�mero de um vendedor de uma empresa, 
seu sal�rio fixo e o total de vendas por ele efetuadas. Cada vendedor 
recebe um sal�rio fixo, mais uma comiss�o proporcional �s vendas por 
ele efetuadas. A comiss�o � de 3% sobre o total de vendas at� 10.000 e 
5% sobre o que ultrapassa este valor. Escrever o n�mero do vendedor, o 
total de suas vendas, seu sal�rio fixo e seu sal�rio total.*/	
	
float numV, salarioF, vendas,comissao;	
	
	
printf("Por favor, vendedor, informe seu n�mero: ");
scanf("%f", &numV);

printf("Agora, insira seu sal�rio fixo: R$");
scanf("%f", &salarioF);

printf("Por fim, insira suas vendas efetuadas: ");
scanf("%f", &vendas);	
	


	return 0;
}
