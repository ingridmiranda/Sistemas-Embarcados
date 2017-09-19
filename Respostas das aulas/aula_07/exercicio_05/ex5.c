#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void atualiza_processo()
{
	system("ps");
	alarm(1);
}

void ctrl_c()
{
	printf("Processo finalizado!");
	exit(1);
}

int main()
{
	signal(SIGALRM, atualiza_processo);
	signal(SIGINT, ctrl_c);
	printf("Aperte CTRL+C para acabar:\n");
	alarm(1);
	while(1);
	return 0;
}
