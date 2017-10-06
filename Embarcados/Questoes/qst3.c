#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char msgs[500];
	int i;
	int pid[2];
	int fd[2];
	// Cria o pipe
	pipe(fd);
	// Cria o processo
	pid[0] = fork();
	// Codigo do filho
	if(pid[0] == 0)
	{
	sprintf(msgs, "FILHO1: Quando o vento passa, é a bandeira que se move.");
	write(fd[1], msgs, strlen(msgs)+1);
	usleep(50000);
	}
	else
	{
	pid[1] = fork();
	if(pid[1] == 0)
	{
		i = -1;
		do
		{
			i++;
			read(fd[1], msgs, strlen(msgs)+1);
		}while(msgs[i]!='\0');
		printf("%s\n", msgs);
		sprintf(msgs, "FILHO2: Não, é o vento que se move.");
	}
	else
	{
		usleep(50000);
		i = -1;
		do
		{
			i++;
			read(fd[1], msgs+1, i);
		}while(msgs[i]!='\0');
		printf("%s\n", msgs);
		puts("PAI: Os dois se enganam. É a mente dos senhores que se move.");


	}	}
	return 0;
}
