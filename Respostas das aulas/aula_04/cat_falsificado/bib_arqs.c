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
