#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct s_stack
{
	void	*data;
	Stack	*previous;
};

Stack*	new(void *data)
{
	// Your code goes here
}

Stack*	push(Stack *s, void *data)
{
	// Your code goes here
}

Stack*	pop(Stack *s, void(*freeData)(void *))
{
	// Your code goes here
}

void*	peek(Stack *s)
{
	// Your code goes here
}

void	print(Stack *s, void(*printData)(void *))
{
	// Your code goes here
}