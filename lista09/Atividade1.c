#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define vet 50

/*
Faça um programa gerenciar uma agenda de contatos. Para cada contato armazene 
o nome, o telefone e o aniversário (dia e mês). O programa deve possuir um menu 
que permita:
a. inserir contato
b. remover contato
c. pesquisar um contato pelo nome
d. listar todos os contatos
e. listar os contatos cujo nome inicia com uma dada letra
f. imprimir os aniversariantes do mês. 
g. sair do programa
*/

typedef struct{
	int dia;
	int mes;
}aniversario;

typedef struct {
	aniversario agenda;
	char nome[40];
	char telefone[20];	
}agendaP;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i = 0, cont = 0;
	char busca[40];
	char remover[40];
	agendaP pessoa[vet];
	char opcao;
	char letra;
	int mesP;
	
	do{
		printf("\n-------------------------------------------------------\n");
		printf("\tMenu de escolhas\n");
		printf("\n(A)- Inserir contato\n(B)- Remover contato\n(C)- Pesquisar contato pelo nome\n(D)- Listar todos os contatos\n");
		printf("(E)- Inserir uma letra e pesquisar por contatos com essa inicial\n(F)- Mostrar aniversariantes do mês\n(G)- Sair");
		printf("\n\nInsira com qual opção você deseja seguir: ");
		scanf(" %c", &opcao);
		opcao = toupper(opcao);
		
		
		if(opcao == 'A')
		{	
			while(i < vet)
			{
				printf("Insira o nome da pessoa: ");
				fflush(stdin);
				fgets(pessoa[cont].nome,20,stdin);
				pessoa[cont].nome[strlen(pessoa[cont].nome)-1]='\0';
				printf("Insira o telefone: ");
				fflush(stdin);
				fgets(pessoa[cont].telefone, 20, stdin);
				pessoa[cont].telefone[strlen(pessoa[cont].telefone)-1]='\0';
				printf("Informe dia o aniversário da pessoa: ");
				scanf("%d%d", &pessoa[cont].agenda.dia, &pessoa[cont].agenda.mes);
				if(pessoa[cont].agenda.dia > 31 || pessoa[cont].agenda.mes > 12)
				{
					break;
				}
				cont++;
				break;
			}

		}
		if(opcao == 'B')
		{
			i = 0;
			printf("Insira o nome da pessoa que deseja remover: ");
			fflush(stdin);
			fgets(remover,40,stdin);
			remover[strlen(remover)-1]='\0';
			while(i < vet){
					if(strcmp(remover, pessoa[i].nome) == 0)
					{
						printf("\nContato %s removido!", remover);
						pessoa[i].agenda.dia = 32;
						break;
					}
					i++;
			}
			if(i >= vet)
			{
				printf("\nNome de contato não encontrado.");
			}
		}
		if(opcao == 'C')
		{
			i = 0;
			printf("Insira o nome da pessoa que deseja buscar: ");
			fflush(stdin);
			fgets(busca,40,stdin);
			busca[strlen(busca)-1] = '\0';
			while(i < cont)
			{
				if(strcmp(busca,pessoa[i].nome) == 0)
				{
					printf("\nContato encontrado!");
					printf("\nNome: %s", pessoa[i].nome);
					printf("\nTelefone: %s", pessoa[i].telefone);
					printf("\nAniversário: %d/%d", pessoa[i].agenda.dia, pessoa[i].agenda.mes);
					break;
				}
				i++;
			}
			if(i >= cont)
				{
					printf("\nNome de contato não encontrado");
					break;
				}	
		}
		if(opcao == 'D')
		{
			printf("\nContatos presentes na agenda");
			for(i = 0; i < cont; i++)
			{	
				if(pessoa[i].agenda.dia <= 31 && pessoa[i].agenda.mes <= 12)
				{
					printf("\nNome: %s", pessoa[i].nome);
					printf("\nTelefone: %s", pessoa[i].telefone);
					printf("\nAniversário: %d/%d", pessoa[i].agenda.dia, pessoa[i].agenda.mes);
					printf("\n");
				}
			}	
		}
		if(opcao == 'E')
		{
			printf("\nInsira a letra para filtrar a pesquisa: ");
			scanf(" %c", &letra);
			for(i = 0; i < cont; i++)
			{
				if(pessoa[i].nome[0] == letra && pessoa[i].agenda.dia != 32)
				{	
					printf("\nContatos com a inicial '%c'", letra);
					printf("\nNome: %s", pessoa[i].nome);
					printf("\nTelefone: %s", pessoa[i].telefone);
					printf("\nAniversário: %d/%d", pessoa[i].agenda.dia, pessoa[i].agenda.mes);
					printf("\n");
				}			
			}	
			i++;
		}
		if(opcao == 'F')
		{
			printf("Insira o mês que deseja consultar: ");
			scanf("%d", &mesP);
			printf("\nAniversariantes do mês '%d'", mesP);
			for(i = 0; i < cont; i++)
			{
				if(mesP == pessoa[i].agenda.mes && mesP == pessoa[i].agenda.dia != 32)
				{	
					printf("\nNome: %s", pessoa[i].nome);
					printf("\nAniversário dia: %d", pessoa[i].agenda.dia);
					printf("\n");
				}			
			}	
			i++;	
		}
		if(opcao == 'G')
		{
			printf("Programa finalizado.");
			break;
		}
		if(opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D' && opcao != 'E' && opcao != 'F' && opcao != 'G')
		{
			printf("\nOpção não idetentificada.");
		}
	}while(opcao != 'G');
	return 0;
}
