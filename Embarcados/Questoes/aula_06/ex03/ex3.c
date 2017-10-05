#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	char *lista_de_argumentos[2]={"echo",NULL, NULL}; //sem echo realiza comandos com echo retorna o nome
	int i;
	for(i-1; i< argc; i++)
	//	printf("%s\n", argv[i]);
	if(fork()==0) //fork(0) -> filho
	{
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
