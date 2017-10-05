#include <stdio.h>
#include <stdlib.h>
#include "bib_arqs.h"

int main(int argc, char argv[]){

	char *texto;
	char nome_arquivo[20];
	
	sprintf(nome_arquivo, "%s", argv[1]);
	le_arq_texto(nome_arquivo, texto);
	printf("\n %s \n", texto);
	
	return 0;
}
