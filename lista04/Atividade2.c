#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/* Para a realização de uma pesquisa entre os habitantes de uma região, faça um algoritmo
que receba os dados da população correspondentes à idade,
sexo (M/F/I) e salário. Faça um programa que calcule e mostre:
a. A média dos salários do grupo;
b. A maior e a menor idade do grupo;
c. A quantidade de mulheres na região;
d. A idade e o sexo da pessoa que possui o menor salário;
Finalize o programa quando for digitado uma idade negativa*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int nmhabitante = 0, i,  contMulher = 0;
	float media = 0;

	printf("\nInforme o número de habitantes da região: ");
	scanf("%d", &nmhabitante);
	
	float salario[nmhabitante];
	int maior = 0, menor = 0, menor_sa = 0, fim, idade[nmhabitante], idadeMenor_sa;
	char sexo[nmhabitante], sexoMenor_sa;
	
	printf("\n------------------------------------------");
    for(i = 0; nmhabitante > i; i++){
    	
	printf("\nMorador %d, quantos anos você tem? ", i + 1);
	scanf("%d",&idade[i]);
	if(idade[i] < 0){
		printf("\nIdade inválida. Programa encerrado.\n");
		goto fim;
	}
	
	printf("\nQual sexo você se identifica?\n(M)-Masculino\n(F)-Feminino\n(I)-Indefinido\n");
	scanf(" %c", &sexo[i]);
	if(sexo[i] == 'F' || sexo[i] =='f'){
		contMulher++;
	}

	printf("\nInforme seu salário (em reais): R$");
	scanf("%f", &salario[i]);
	media += salario[i];
	printf("\n------------------------------------------\n");
	}
	
	maior = idade[0];
	menor = idade[0];
	menor_sa = salario[0];
	
	for(i = 0; i < nmhabitante; i++){
		if(idade[i] > maior){
			maior = idade[i];
		}
		if(idade[i] < menor){
			menor = idade[i];
		}
	}
	for(i = 0; i < nmhabitante; i++){
		if(salario[i] < menor_sa){
			menor_sa = salario[i];
			idadeMenor_sa = idade[i];
			sexoMenor_sa = sexo[i];
        }
	}
	media = (media/nmhabitante);
	printf("\nA média dos salários da região foi de: R$%.2f", media);
	printf("\nO número de mulheres na região foi de: %d", contMulher);
	printf("\nA maior idade registrada na região foi de: %d", maior);
	printf("\nA menor idade registrada na região foi de: %d", menor);
	printf("\nO menor salário registrado foi de: R$%d, é de uma pessoa do sexo '%c' e possui %d anos", menor_sa, sexoMenor_sa, idadeMenor_sa);
	
	fim:
	return 0;
}
