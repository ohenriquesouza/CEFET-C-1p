#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 5
#define COLUNA 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    int matricula[LINHA][COLUNA], i = 0, j = 0;
	int posicaoMaior = 0;
    float mediaP[LINHA][COLUNA];
	float mediaTotal[LINHA][COLUNA];
	float notaFinal[LINHA][COLUNA];
	float NotaMaior = 0, media = 0;
    
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            
            if (j == 0){
                printf("\nInforme o número de matrícula do %dº aluno: ", i + 1);
                scanf ("%d", &matricula[i][j]);
            }    
            
            if(j == 1){
                printf("Informe a média das provas do %dº aluno: ", i + 1);
                scanf("%f", &mediaP[i][j]);    
            }
            
            if(j == 2){
                printf("Informe a média dos trabalhos do %dº aluno: ", i + 1);
                scanf("%f", &mediaTotal[i][j]);
            }
            
            if(j == 3){
                notaFinal[i][j] = mediaP[i][1] + mediaTotal[i][2];
                media += notaFinal[i][j] / LINHA;
                printf("Nota final do %dº aluno: %.2f\n", i + 1, notaFinal[i][j]);
            }
        }
        if (notaFinal[i][3] > NotaMaior){
            NotaMaior = notaFinal[i][3];
            posicaoMaior = i;
        }
        
    }
    printf("\nA maior nota foi '%.2f', dos alunos de matrícula: ", NotaMaior);
    
    for (i = 0; i < LINHA; i++){
        if (notaFinal[i][3] == NotaMaior){
            printf("%d\n", matricula[i][0]);
        }
    }
        
    printf("\nA média das notas finais da turma é de: %.2f", media);
    
    return 0;
}
