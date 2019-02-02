#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct s_stack
{
	void	*data;
	Stack	*next;
};

Stack*	create(void *data)
{
	// Your code goes here
}

Stack*	push(Stack *s, void *data)
{
	// Your code goes here
}

Stack*	pop(Stack *s, void(*f)(void *))
{
	// Your code goes here
}

void*	peek(Stack *s)
{
	// Your code goes here
}

void	foreach(Stack *s, void(*f)(void *))
{
	// Your code goes here
}