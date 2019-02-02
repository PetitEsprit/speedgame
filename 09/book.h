typedef struct s_book Book;
struct s_book;

/* Add a new Book */
Book*	add(char *title, char *author, char *genre, short year);

/* Delete a Book */
void	delete(Book *b);

/* Print a Book */
void	print(Book *b);