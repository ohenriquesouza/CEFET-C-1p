#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
/* Faça um algoritmo que lê o número de um vendedor de uma empresa, 
seu salário fixo e o total de vendas por ele efetuadas. Cada vendedor 
recebe um salário fixo, mais uma comissão proporcional às vendas por 
ele efetuadas. A comissão é de 3% sobre o total de vendas até 10.000 e 
5% sobre o que ultrapassa este valor. Escrever o número do vendedor, o 
total de suas vendas, seu salário fixo e seu salário total.*/	
	
float numV, salarioF, vendas,comissao;	
	
	
printf("Por favor, vendedor, informe seu número: ");
scanf("%f", &numV);

printf("Agora, insira seu salário fixo: R$");
scanf("%f", &salarioF);

printf("Por fim, insira suas vendas efetuadas: ");
scanf("%f", &vendas);	
	


	return 0;
}
