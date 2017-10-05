#include <stdio.h>
#include <stdlib.h>
#include "bib_arqs.h"

int tam_arq_texto(char *nome_arquivo){

	FILE *fp;
	char *nome = nome_arquivo;

	int tamanho;

	fp = fopen(nome,"r");

	fseek(fp,0,SEEK_END);
	tamanho = ftell(fp);
	fclose(fp);

	return tamanho;
}

void le_arq_texto (char *nome_arquivo, char *conteudo){
	
	FILE *fp;
	char *nome = nome_arquivo;	
	int i=0, tamanho;	

	fp = fopen(nome, "r");
	
	fseek(fp, 0, SEEK_END);
	tamanho = ftell(fp);
	rewind(fp);
	
	for (i=0; i<tamanho; i++){
		conteudo[i] = getc(fp);
	}
	fclose(fp);

}


int Num_Caracs(char *string){
	int cont;
	for(cont=0; string[cont]!='\0'; cont++){
		cont ++;
	}
	return cont;

}

int busca_conta_palavra(char *nome_arquivo, char *palavra_chave){
	
	FILE *fp;
	char *nome = nome_arquivo;	
	int tamanho, i=0, j=0, n=0, cont;

	fp = fopen(nome, "r");
	
	fseek(fp,0,SEEK_END);
	tamanho = ftell(fp);
	rewind(fp);

	for(cont=0; palavra_chave[cont]!='\0'; cont++){
		cont += cont;
	}

	for (i=0; i<tamanho; i++){
		for (j=0; j<cont; j++){
			if (getc(fp) == palavra_chave[j]){
				n++;
	}}}

	fclose(fp);

	return n;
}


