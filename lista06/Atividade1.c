#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 10
/* Leia 10 n�meros inteiros e armazene em um vetor. Em seguida escreva os 
elementos que s�o primos e suas respectivas posi��es no vetor. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int  n, i, j, num[vet], contador_primo = 0, nmprimo = 0;

	for (i = 0 ;i < vet; i++) {

        printf("\nInforme o %d� valor da sequ�ncia: ",i+1);
        scanf("%d",&num[i]);
    }
    
    for( i = 0; i < 10; i++)
    {
    	n = num[i];
    	
		if ( n != 1)
		{
			nmprimo = 1;
			for(j = 2; j < n; j++)
			{
				if(n % j == 0)
				{
					nmprimo = 0;	
				}
			}
			if (nmprimo == 1)
			{
				contador_primo++;
    			printf("\nO n�mero %d � um n�mero primo e est� armazenado na posi��o %d\n", num[i], i+1);
			}
		}
	}

 
    return 0;
}	
