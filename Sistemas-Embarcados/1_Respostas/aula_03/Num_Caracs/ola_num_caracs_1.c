#include <stdio.h>
#include <stdlib.h>
#include "Num_Caracs.h"

int main(int argc, char **argv){

int i = 0;
for (i=0; i<argc; i++){
	printf ("Argumento: %s / Número de caracteres: %d \n", argv[i], Num_Caracs(argv[i]));
	}
return 0;
}	
