#include <stdio.h>

void plusun(char str[2])
{
	if(str[1] == 'F')
	{
		if(str[0] == 'F')
			str[0] = str[1] = '0';
		else if(str[0] == '9')
		{
			str[0] = 'A';
			str[1] = '0';
		}
		else
		{
			str[1] = '0';
			str[0]++; 
		}
	}
	else if (str[1] == '9')
		str[1] = 'A';
	else
		str[1]++;
}