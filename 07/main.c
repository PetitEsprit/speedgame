#include <stdio.h>

// Your code goes here

void foreach(int *t, int size, void(*f)(int))
{
	int i;
	for(i = 0; i<size; i++)
	{
		f(t[i]);
	}
}

int	main()
{
	int t[10] = {9,2,3,5,7,10,11,0,1,13};
	// Your code goes here
	
	return 0;
}
