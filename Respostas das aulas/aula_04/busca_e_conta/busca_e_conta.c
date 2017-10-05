#include <stdio.h>
#include <stdlib.h>
#include "bib_arqs.h"

int main(int argc, char **argv){
	
	char nome_arquivo[20];
	char palavra_chave[20];
	int ocorrencias;

	sprintf(nome_arquivo,"%s",argv[2]);
	sprintf(palavra_chave,"%s",argv[1]);
	
	ocorrencias = busca_conta_palavra(nome_arquivo, palavra_chave);

	printf("%s ocorre %d vezes no arquivo '%s'.\n", palavra_chave, ocorrencias, nome_arquivo);
	return 0;
}



