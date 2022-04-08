#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Deseja-se fazer um levantamento a respeito da aus�ncia de alunos �
primeira prova de Fundamentos de Computa��o para cada uma das 14
turmas existentes. Para cada turma, � fornecido um conjunto de valores,
sendo que os dois primeiros valores do conjunto correspondem �
identifica��o da turma (A, ou B, ou C, ...) e ao n�mero de alunos
matriculados, e os demais valores deste conjunto cont�m o n�mero de
matr�cula do aluno e a letra A ou P para o caso de o aluno estar ausente
ou presente, respectivamente. Fa�a um algoritmo que, para cada turma,
calcule a porcentagem de aus�ncia e escreva a identifica��o da turma e
a porcentagem calculada; determine e escreva quantas turmas tiveram
porcentagem de aus�ncia superior a 5%.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	char idturma, presenca;
	int numalunos, i, matriculaA, j, ausente;
	float Causencia, pturma;

	for (j=0;j<14;j++){
		printf("Informe o c�digo da turma: ");
		scanf(" %c", &idturma);
		printf("\nInforme a quantidade de alunos matriculados na turma %c: ", idturma);
		scanf("%d", &numalunos);
		ausente=0;
	 	for (i=0;i<numalunos;i++) {
	 		printf ("\nInforme o n�mero de matr�cula do aluno %d: ", i+1);
	 		scanf ("%d", &matriculaA);
			printf ("\nInforme se o aluno %d est� presente (P) ou ausente (A): ", matriculaA);
			scanf (" %c", &presenca);
			printf ("\n");
			if (presenca=='A') {
				ausente++;
			} 
		}
		Causencia= (float) ausente/numalunos*100;
		printf("\n||A turma %c teve um total de %2.f%% de aus�ncia.||\n", idturma, Causencia);
		if (Causencia > 5) {
		pturma++;
		}
} 
	printf("\n||O n�mero total de turmas que tiveram a aus�ncia superior 5%% foi de: %.0f||", pturma);
	
	return 0;
}
