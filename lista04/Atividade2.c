#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/* Para a realiza��o de uma pesquisa entre os habitantes de uma regi�o, fa�a um algoritmo
que receba os dados da popula��o correspondentes � idade,
sexo (M/F/I) e sal�rio. Fa�a um programa que calcule e mostre:
a. A m�dia dos sal�rios do grupo;
b. A maior e a menor idade do grupo;
c. A quantidade de mulheres na regi�o;
d. A idade e o sexo da pessoa que possui o menor sal�rio;
Finalize o programa quando for digitado uma idade negativa*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int nmhabitante = 0, i,  contMulher = 0;
	float media = 0;

	printf("\nInforme o n�mero de habitantes da regi�o: ");
	scanf("%d", &nmhabitante);
	
	float salario[nmhabitante];
	int maior = 0, menor = 0, menor_sa = 0, fim, idade[nmhabitante], idadeMenor_sa;
	char sexo[nmhabitante], sexoMenor_sa;
	
	printf("\n------------------------------------------");
    for(i = 0; nmhabitante > i; i++){
    	
	printf("\nMorador %d, quantos anos voc� tem? ", i + 1);
	scanf("%d",&idade[i]);
	if(idade[i] < 0){
		printf("\nIdade inv�lida. Programa encerrado.\n");
		goto fim;
	}
	
	printf("\nQual sexo voc� se identifica?\n(M)-Masculino\n(F)-Feminino\n(I)-Indefinido\n");
	scanf(" %c", &sexo[i]);
	if(sexo[i] == 'F' || sexo[i] =='f'){
		contMulher++;
	}

	printf("\nInforme seu sal�rio (em reais): R$");
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
	printf("\nA m�dia dos sal�rios da regi�o foi de: R$%.2f", media);
	printf("\nO n�mero de mulheres na regi�o foi de: %d", contMulher);
	printf("\nA maior idade registrada na regi�o foi de: %d", maior);
	printf("\nA menor idade registrada na regi�o foi de: %d", menor);
	printf("\nO menor sal�rio registrado foi de: R$%d, � de uma pessoa do sexo '%c' e possui %d anos", menor_sa, sexoMenor_sa, idadeMenor_sa);
	
	fim:
	return 0;
}
