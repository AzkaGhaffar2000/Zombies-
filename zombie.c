#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
	int i;
	int Zombie = fork();
	for (i = 0; i < 10; i++)
			{
			if (Zombie == 0)
			{	
			printf("\nHello, I am a zombie\n");
			exit(0);
			}
		else {
			sleep(1);
		}
		}
	return 0;
}
