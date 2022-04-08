#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Faça um algoritmo para uma caixa registradora. A máquina recebe os produtos 
comprados e a quantidade de cada um deles e retorna o valor total da compra. A 
funcionária deverá entrar com o código do produto e a quantidade. A tabela abaixo 
mostra os produtos existentes. Quando a funcionária terminar de entrar os produtos ela 
deverá digitar código do produto = 0 (zero). Neste instante, a caixa registradora deverá 
retornar o valor total da compra. Lembre-se de fazer a verificação de erros checando se 
a funcionária digitou os códigos corretamente */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int codigo = -1, quantidade;
	float soma;
	
	while(codigo != 0)
	{
		printf("\nDigite o código do produto comprado: ");
		scanf("%d", &codigo);
		if (codigo == 0)
		{
			break;
		}
		printf("Quantas unidades do produto %d você deseja comprar? ",codigo);
		scanf("%d", &quantidade);	
		switch(codigo)
		{
		  case 101:
		  	soma += quantidade * 7.89;
		  	printf("\nVocê escolheu %d unidade(s) de Adoçante FINN 65ml, no valor de: R$7.89\n", quantidade);
		  	break;
		  case 102:
		  	soma += quantidade * 4.49;
		  	printf("\nVocê escolheu %d unidade(s) de Adoçante STEVIA 80ml, no valor de: R$4.49", quantidade);
		  	break;
		  case 301:
		  	soma += quantidade * 4.99;
		  	printf("\nVocê escolheu %d unidade(s) de Azeite portugês 200ml, no valor de: R$4,99", quantidade);
		  	break;
		  case 401:
		  	soma += quantidade * 1.39;
		  	printf("\nVocê escolheu %d unidade(s) de Batata congelada MCCAIN 720gr, no valor de: R$1,39", quantidade);
			break;
		  case 403:
		  	soma += quantidade * 1.09;
		  	printf("\nVocê escolheu %d unidade(s) de Biscoito BONO 200gr, no valor de: R$1.09", quantidade);
			break;
		  case 501:
		  	soma += quantidade * 2.98;
		  	printf("\nVocê escolheu %d unidade(s) de Aguardente Velho Barreiro 910ml, no valor de: R$2.98", quantidade);
			break;
		  case 502:
		  	soma += quantidade * 1.29;
		  	printf("\nVocê escolheu %d unidade(s) de Cerveja Miller long neck 355ml, no valor de: R$1,29", quantidade);
		  	break;  
		  case 503:
		  	soma += quantidade * 0.78;
		  	printf("\nVocê escolheu %d unidade(s) de Cerveja KAISER lata ou long neck, no valor de: R$0,78", quantidade);
		  	break;
		  case 504:
		  	soma += quantidade * 1.25;
		  	printf("\nVocê escolheu %d unidade(s) de Cerveja Bohemia lata ou long neck, no valor de: R$1,25", quantidade);
		  	break;
		  case 505:
		  	soma += quantidade * 0.78;
		  	printf("\nVocê escolheu %d unidade(s) de Cerveja Antártica lata ou long neck, no valor de: R$0,78", quantidade);
		  	break;
		  case 506:
		  	soma += quantidade * 0.89;
		  	printf("\nVocê escolheu %d unidade(s) de Cerveja Brahma lata ou long neck, no valor de: R$0,89", quantidade);
		  	break;	    		
		}
	} printf("A soma total da sua compra deu um valor de: R$%.2f", soma);
	
	return 0;
}
