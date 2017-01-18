#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input(char *command)
{
	if (!strcmp(command, "lineup\n"))
	{
		printf("\nlineup\n");
		return -100;
	}
	if (!strcmp(command, "table\n"))
	{
		printf("\ntable\n");
		return -100;
	}
	if (!strcmp(command, "save\n"))
	{
		printf("\nsave\n");
		return -100;
	}
	if (!strcmp(command, "fixture\n"))
	{
		printf("\nfixture\n");
		return -100;
	}
	if (!strncmp(command, "proceed", 7))
	{
		printf("\nproceed\n");
		return -100;
	}
	if (!strcmp(command, "exit\n"))
	{
		exit(0);
	}
	if (!strcmp(command,"yes\n")) 
	{
		return -1;
	}
	if (!strcmp(command, "no\n")) 
	{
		return -2;
	}
	if (command[0] >= '0'&& command[0] <= '9')
	{
		int counter = 0, result = 0;
		while (command[counter] != '\n')
		{
			if (command[counter] >= '0'&& command[counter] <= '9')
			{
				result = result * 10 + command[counter]-'0';
			}
			else {
				return -100;
			}
			counter++;
		}
		return result;
	}
	if (strlen(command) < 49) return -1000;
	while(command!= NULL)
	{
		fgets(command, 20, stdin);
	}
	return -1000;
}


