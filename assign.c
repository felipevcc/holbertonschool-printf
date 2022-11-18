#include "main.h"

int _assign(char *buff, int count, char *value)
{
	int i = 0;

	while (value[i])
	{
		buff[i] = value[i];
		count++;
		i++;
	}
	return (count);
}
