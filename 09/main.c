#include <stdlib.h>
#include "../08/stack.h"
#include "book.h"

Stack*	build(void)
{
	// Your code goes here
}

void	destroy(Stack *lib)
{
	// Your code goes here
}

int	main(void)
{
	Stack *lib;
	
	lib = build();
	foreach(lib, (void*)print);
	destroy(lib);
	return 0;
}