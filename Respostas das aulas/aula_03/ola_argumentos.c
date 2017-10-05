#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int cont;
	cont = (argc-1);
	printf("Olá, ");
	for (cont=1; cont<argc; cont++){
	printf(" %s", argv[cont]);
	}
	printf("\n");
	return 0;
}
