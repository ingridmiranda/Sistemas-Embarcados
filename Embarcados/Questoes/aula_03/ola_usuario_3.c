#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int cont;
	cont = (argc-1);
	printf("Olá, %s\n", argv[1]);
	printf("Número de entradas: %d\n", cont);
	return 0;
}
