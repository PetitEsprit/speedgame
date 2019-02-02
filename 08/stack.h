typedef struct s_stack Stack;
struct s_stack;

/* Send the data into the stack */
Stack*	push(Stack *s, void *data);

/* Delete the latest data sent to the stack */
Stack*	pop(Stack *s, void(*freeData)(void *));

/* Retrieve the latest data sent to the stack */
void*	peek(Stack *s);

/* Display the stack */
void	print(Stack *s, void(*printData)(void *));