#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 50

typedef struct
{
	char nome[20];
	char email[30];
	double telefone;
}info;
typedef struct
{	
	info lugares[4];
	int nmMesa;
	int qntCadeira;
}mesa;

int main(int argc, char *argv[]) {
	FILE *p;
	int idMesa = 0;
	int contM = 0, contP = 0;
	int i, j;
	char nome[20];
	int remover = 0;
	char escolha;
	mesa reserva[tam];
	int busca;
	int mesa[tam];
	float ocuM = 0, ocuP = 0;
	int qntMesa = 0;

	
	
	printf("\nInforme o nome do arquivo: \n");
	fgets(nome,20,stdin);
	nome[strlen(nome)- 1] = '\0';
	
	p = fopen( nome, "rb");
	if(p == NULL)
	{
		printf("Arquivo '%s' sendo criado...\n", nome);
		for(i = 0; i < tam; i++)
		{
			reserva[i].nmMesa = 0;
		}	
	}
	if(p != NULL)
	{
		fread(reserva, sizeof(mesa), tam, p);
		for(i = 0; i < tam; i++)
		{
			if(reserva[i].nmMesa == 55)
			{
				contM++;
			}	
		}	
		for(i = 0; i < 4; i++)
		{
			if(reserva[i].nmMesa == 55)
			{
				contP++;
			}
		}
		fclose(p);
	}

	do
	{
		printf("\n--------------------------------SISTEMA DE RESERVA DE MESA--------------------------------\n");
		printf("\n\t\t\t\t-Menu de op��es-\n");
		printf("\n");
		printf("(A)- Para realizar reservas;\n(B)- Para excluir reservas;\n(C)- Para procurar uma reserva;\n(D)- Para visualizar todas as reservas;\n(E)- Informar a porcentagem de ocupa��o do restaurante;");
		printf("\n");
		printf("\n--------------------------------ESCOLHA UMA DAS OP��ES ACIMA--------------------------------\n");
		scanf(" %c", &escolha);
		escolha = toupper(escolha);
		
		if(escolha == 'A')
		{
			if(contM == 50)
				{
					printf("\nN�o h� reservas dispon�veis no momento, o restaurante se encontra cheio.");
					break;
				}
			printf("\n");
			printf("\n--------------------------------INFORMA��ES--------------------------------\n");
			printf("\nInforme a quantidade de mesas que deseja reservar: ");
			scanf("%d", &qntMesa);
			if(qntMesa <= 50)
			{
				for(i = 0; i < qntMesa; i++)
				{
					printf("\nInsira o n�mero '0' para finalizar o programa.");
					printf("\nQual o n�mero da %d� mesa desejada? (1 a 50): ", i+1);
					scanf("%d", &idMesa);
					if(idMesa == 0)
					{
						printf("\n--------------------------------CONFIRMA��O--------------------------------\n");
						printf("\nAtalho para finalizar o programa detectado.\n");
						break;
					}
					if(reserva[idMesa - 1].nmMesa == 55 && idMesa > 0 && idMesa < 51)
					{
						printf("Mesa indispon�vel.");
						break;
					}
					printf("\nQuantas pessoas ir�o ocupar a mesa? (M�x. 4): ");
					scanf("%d", &reserva[idMesa - 1].qntCadeira);
					if(reserva[idMesa - 1].qntCadeira > 0 && reserva[idMesa - 1].qntCadeira <= 4)
					{
						for(j = 0; j < reserva[idMesa - 1].qntCadeira; j++)
						{
							printf("\n--------------------------------INFORMA��ES--------------------------------\n");
							printf("\nInforme o nome da pessoa que ocupar� a %d� cadeira: ", j+1);
							fflush(stdin);
							fgets(reserva[idMesa - 1].lugares[j].nome, 20, stdin);
							printf("\nInforme o telefone da pessoa que ocupar� a %d� cadeira: ", j+1);
							scanf("%d", &reserva[idMesa - 1].lugares[j].telefone);
							printf("\nPor fim, insira o e-mail da pessoa que ocupar� a %d� cadeira: ", j+1);
							fflush(stdin);
							fgets(reserva[idMesa - 1].lugares[j].email, 30, stdin);
							contP++;
						}
						reserva[idMesa -1].nmMesa = 55;
						printf("\n--------------------------------CONFIRMA��O--------------------------------\n");
						printf("\nReserva concluida.");
						printf("\n\n");
						contM++;
					}
					else
						printf("\nQuantidade de cadeiras inv�lida.");
				}
			}
		}
		if(escolha == 'B')
			{
				printf("\n");
				i = 0;
				printf("\n--------------------------------CANCELAMENTO DE RESERVA--------------------------------\n");
				printf("\nInsira o n�mero da mesa que deseja cancelar a reserva: ");
				scanf("%d", &remover);
				if(contM == 0)
				{
					printf("\n--------------------------------CONFIRMA��O--------------------------------\n");
					printf("\nN�o foi poss�vel remover a reserva pois n�o h� reservas no restaurante.\n");
				}
				while(i < tam)
				{
					if(remover == i + 1 && reserva[i].nmMesa == 55)
					{
						printf("\n--------------------------------CONFIRMA��O--------------------------------\n");
						printf("\nReserva removida.");
						printf("\n\n");
						reserva[i].nmMesa = 0;
						contP -= reserva[i].qntCadeira;
						contM--;
						break;
					}
					i++;
				}
				if(i >= tam)
				{
					printf("\n--------------------------------CONFIRMA��O--------------------------------\n");
					printf("\nN�o foi poss�vel remover a reserva pois a mesa '%d' n�o possui reserva.\n", remover);
				}
			}
			if(escolha == 'C')
			{
				printf("\n");
				printf("\n--------------------------------CONSULTA DE RESERVA--------------------------------\n");
				printf("Insira o n�mero da mesa que deseja consultar: ");
				scanf("%d", &busca);
				for(i = 0; i < tam; i++)
				{
					if(busca == i + 1 && reserva[i].nmMesa == 55)
					{
						printf("\n--------------------------------RESULTADO PESQUISA--------------------------------\n");
						printf("\nA mesa %d j� possui reserva confirmada.", busca);
						break;
					}		
				}
				if(i >= tam)
					{
						printf("\n--------------------------------RESULTADO PESQUISA--------------------------------\n");
						printf("\nA mesa %d est� dispon�vel.", busca);
					}	
			}
		if(escolha == 'D')
		{
			printf("\n");
			printf("\n--------------------------------MESAS RESERVADAS--------------------------------\n");
			if(contM == 0)
			{
				printf("\n--------------------------------ERRO--------------------------------------------\n");
				printf("\nNenhuma reserva encontrada, realize uma primeiro utilizando a op��o (A).\n");
			}
			for(i = 0; i < tam; i++)
			{
				if(reserva[i].nmMesa == 55)
				{
					printf("\n--------------------------------MESA OCUPADA--------------------------------\n");
					printf("\nA mesa '%d' encontra-se reservada", i + 1);
					printf(", com %d cadeira(s) ocupada(s).", reserva[i].qntCadeira);
					printf("\n----------------------------------------------------------------------------\n");
					printf("\n");
				}
			}
			
		}
		if(escolha == 'E')
		{
			printf("\n");
			ocuP =  ((float)contP / 200) * 100;
			ocuM =  ((float)contM / 50) * 100;
			printf("\n--------------------------------OCUPA��O TOTAL DO RESTAURANTE--------------------------------\n");
			printf("\n--Ocupa��o do restaurante--");
			printf("\n '%.2f%%' das mesas j� foram ocupadas", ocuM);
			printf("\n '%.2f%%' das cadeiras j� foram ocupadas", ocuP);
		}
		
	}while(escolha != 0 && idMesa != 0);
	p = fopen(nome, "wb");
	if(p != NULL)
	{
		fwrite(reserva, sizeof (mesa), tam, p);
		fclose(p);
	}
	return 0;
}
