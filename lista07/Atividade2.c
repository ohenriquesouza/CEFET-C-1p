#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* 
Faça um programa que receba uma frase e, a cada ocorrência da palavra 
TECLADO, inserir o texto OU MOUSE. Exemplo: Frase: PODE-SE UTILIZAR 
O TECLADO PARA ENTRADA DE DADOS. Resposta: PODE-SE UTILIZAR 
O TECLADO OU MOUSE PARA ENTRADA DE DADOS 
*/

int main(int argc, char *argv[]) {
    setlocale(LC_ALL,"portuguese");
    int i = 0, j = 0, z = 0, cont = 0;
    char frase[80];
    
    fflush(stdin);
    printf("\nInsira uma frase que contenha a palavra 'TECLADO': ");
    fgets(frase,80,stdin);
    frase[strlen(frase)-1] = '\0';
    
    for(i = 0; i < strlen(frase); i++)
    {
        if(frase[i] == 't' && frase[i+1] == 'e' && frase[i+2] == 'c' && frase[i+3] == 'l' && frase[i+4] == 'a' && frase[i+5] == 'd' && frase[i+6] == 'o')
        {
 			cont++;
        }    
    }
    
    char frase3[17] = "teclado ou mouse ";
    
    char frase2[strlen(frase) + strlen(" ou mouse ") * cont];
    
    for(i = 0, j = 0; i < strlen(frase); i++, j++)
    {
    	if(frase[i] == 't' && frase[i+1] == 'e' && frase[i+2] == 'c' && frase[i+3] == 'l' && frase[i+4] == 'a' && frase[i+5] == 'd' && frase[i+6] == 'o')
    	{
    		for(z = 0; z < strlen(frase3); z++)
    		{
    			frase2[j + z] = frase3[z]; 
			}
			i = (i + 7);
			j = (j + 16);
		}
		else
		{
			frase2[j] = frase[i];
		}
    }
    frase2[j] = '\0';
    printf("\nNova frase: %s", frase2);

    return 0;
}
