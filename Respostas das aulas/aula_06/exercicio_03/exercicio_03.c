#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	char *arg_list[5]={NULL, NULL, NULL, NULL, NULL}; //sem echo realiza comandos, com echo retorna o nome
	int i;
	for(i-1; i< argc; i++){

	if(fork()==0){
	arg_list[0] = (char *)argv[i];
	execvp(arg_list[0], arg_list);
	printf("Erro no comando %s\n");
		argv[i];
	exit(0);
	}
	else
		wait(NULL);
	}
	return 0;
}
