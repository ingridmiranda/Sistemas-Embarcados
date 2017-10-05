#include <stdio.h>
#include <stdlib.h>
#include "Num_Caracs.h"

int main(int argc, char **argv){


int i=0;
int num;

for(i=0; i<argc; i++){
	num = num + Num_Caracs(argv[i]);
}

printf("Total de caracteres de entrada: %d \n", num);

return 0;
}
