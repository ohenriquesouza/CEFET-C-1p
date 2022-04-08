#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Faça um programa que leia uma String S1 e que contenha um menu com as 
seguintes opções:
a. Imprimir o tamanho da string S1. Em seguida, copie a String S1 para uma 
outra String e concatene a palavra “concatenada” ao fim da String 
copiada.
b. Comparar a string S1 com uma nova string S2 fornecida pelo usuário e 
imprimir o resultado da comparação. Em seguida, deve-se exibir na tela 
o resultado da concatenação das 2 Strings;
c. Contar quantas vezes um dado caractere C1 aparece na string S1. Em 
seguida, deve-se substituir a primeira ocorrência do caracter C1, pelo 
caracter C2. Os caracteres C1 e C2 serão lidos pelo usuário;
d. Verificar se uma string S2 é substring de S1. A string S2 também deve ser 
informada pelo usuário; */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, quebralinha, cont = 0, comparar, contc = 0,substring = 0;
	char palavra1[80],  palavra2[80], palavra3[80], copiapalavra[80];
	char escolha, caractere1, caractere2;
	
	printf("Digite a frase: ");
	fgets(palavra1,80,stdin);
	quebralinha = strcspn(palavra1, "\n");
    palavra1[quebralinha] = '\0';
	
	printf("\nMenu de escolhas: \n ");

	printf("\n(A)- Informa o tamanho da string e a mostra concatenada.");
	printf("\n(B)- Deve se inserir uma nova frase, as duas serão comparadas e concatenadas.");
	printf("\n(C)- Conta quantas vezes um carctere se repete, você deve inserir um novo para substituilo.");
	printf("\n(D)- Verifica se a nova string inserida pelo usuário é substring da primeira inserida.\n");
	
	printf("\nEscolha a opção que deseja: ");
	scanf(" %c", &escolha);

	if (escolha =='A')
	{
		for(i = 0; i < strlen(palavra1); i++)
		{
			if(palavra1[i] != 32)
			{
				cont++;
			}
		}
		strcpy(copiapalavra, palavra1);
		strcat(copiapalavra, " concatenada");
	
		printf("\nA frase digitada tem %d letras.",cont);
		printf("\nFrase concatenada: %s",copiapalavra);
	}
	
	if(escolha =='B')
	{
		fflush(stdin);
		printf("\nDigite uma nova frase: ");
		fgets(palavra2,80,stdin);
		quebralinha = strcspn(palavra2, "\n");
    	palavra2[quebralinha] = '\0';
	
		comparar = strcmp(palavra1, palavra2);
	
		if(comparar == 0)
		{
			printf("\nAmbas as frases são iguais!");	
		}
		else
			printf("\nAs palavras informadas não são iguais.");
		
		strcat(palavra1, " ");
		strcat(palavra1, palavra2);
		printf("\nFrase concatenada: %s", palavra1);
	}
	
	if(escolha == 'C')
	{
		printf("Informe qual caractere você deseja alterar na frase '%s': ", palavra1);
		scanf(" %c", &caractere1);
		
		for(i = 0; i < strlen(palavra1); i++)
		{
			if(palavra1[i] == caractere1)
				contc++;
		}
		printf("\nO caractere '%c', apareceu na palavra %d vez(es).", caractere1, contc);
		printf("\nInforme o novo caractere para fazer a substituição do '%c': ", caractere1);
		scanf(" %c", &caractere2);
		for(i = 0; i < strlen(palavra1); i++)
		{
			if(caractere1 == palavra1[i])
			{
				palavra1[i] = caractere2;
				printf("\nNova palavra após a substituição: %s", palavra1);
				break;
			}
		}	
	}
	
	if(escolha == 'D')
	{
		fflush(stdin);
		printf("Insira uma nova frase: ");
		fgets(palavra3,80,stdin);
		quebralinha = strcspn(palavra3, "\n");
    	palavra3[quebralinha] = '\0';
    	
    	substring = strstr(palavra1, palavra3);
    	if(substring != 0)
    	{
    		printf("\nA palavra '%s' apareceu em ambas frases.", palavra3);
		}
		else
			printf("\nNão foi identificado nenhuma substring.");
	}


	
	return 0;
}
