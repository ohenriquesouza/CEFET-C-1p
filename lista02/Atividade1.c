#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Deseja-se fazer um levantamento a respeito da ausência de alunos à
primeira prova de Fundamentos de Computação para cada uma das 14
turmas existentes. Para cada turma, é fornecido um conjunto de valores,
sendo que os dois primeiros valores do conjunto correspondem à
identificação da turma (A, ou B, ou C, ...) e ao número de alunos
matriculados, e os demais valores deste conjunto contêm o número de
matrícula do aluno e a letra A ou P para o caso de o aluno estar ausente
ou presente, respectivamente. Faça um algoritmo que, para cada turma,
calcule a porcentagem de ausência e escreva a identificação da turma e
a porcentagem calculada; determine e escreva quantas turmas tiveram
porcentagem de ausência superior a 5%.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	char idturma, presenca;
	int numalunos, i, matriculaA, j, ausente;
	float Causencia, pturma;

	for (j=0;j<14;j++){
		printf("Informe o código da turma: ");
		scanf(" %c", &idturma);
		printf("\nInforme a quantidade de alunos matriculados na turma %c: ", idturma);
		scanf("%d", &numalunos);
		ausente=0;
	 	for (i=0;i<numalunos;i++) {
	 		printf ("\nInforme o número de matrícula do aluno %d: ", i+1);
	 		scanf ("%d", &matriculaA);
			printf ("\nInforme se o aluno %d está presente (P) ou ausente (A): ", matriculaA);
			scanf (" %c", &presenca);
			printf ("\n");
			if (presenca=='A') {
				ausente++;
			} 
		}
		Causencia= (float) ausente/numalunos*100;
		printf("\n||A turma %c teve um total de %2.f%% de ausência.||\n", idturma, Causencia);
		if (Causencia > 5) {
		pturma++;
		}
} 
	printf("\n||O número total de turmas que tiveram a ausência superior 5%% foi de: %.0f||", pturma);
	
	return 0;
}
