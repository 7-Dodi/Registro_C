#include <stdio.h>
#include <string.h>
const int TAM=5;
typedef struct dados{
	char nome[20];
	char cidade[20];
	long int telefone;
}Dados;
//void lendo (Dados vet[TAM]){
//	int k;
//	for(k=0;k<TAM;k++){
//		printf("\n\n----------------- Pessoa %d-----------------\n", k+1);
//		fflush(stdin);
//		printf("\nNome:");
//		gets(vet[k].nome);
//		fflush(stdin);
//		printf("Cidade:");
//		gets(vet[k].cidade);
//		printf("Telefone:");
//		scanf("%d", & vet[k].telefone);
//	}
//}
void main(){
	int k, x;
	Dados vet[TAM];
//	lendo(vet);
	for(k=0;k<TAM;k++){
		printf("\n\n----------------- Pessoa %d-----------------\n", k+1);
		fflush(stdin);
		printf("\nNome:");
		gets(vet[k].nome);
		fflush(stdin);
		printf("Cidade:");
		gets(vet[k].cidade);
		printf("Telefone:");
		scanf("%d", & vet[k].telefone);
	}
	printf("\n\nImprimindo os dados em ordem alfabetica:");
	for(k=0;k<TAM;k++){
		Dados aux;
		int valor;
		for(x=k;x<TAM;x++){
			if(strcmp(vet[x].nome, vet[k].nome)<0){
				aux= vet[k];
				vet[k]= vet[x];
				vet[x]= aux;
			}
		}
	}
	for(k=0;k<TAM;k++){
		printf("\n\n----------------- Pessoa %d------------------\n", k+1);
		printf("\nNome: %s", vet[k].nome);
		printf("\nCidade: %s", vet[k].cidade);
		printf("\nTelefone: %d", vet[k].telefone);
	}
}
