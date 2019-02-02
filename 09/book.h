typedef struct s_book Book;
struct s_book;

/* Create a new Book */
Book*	new(char *title, char *author, char *genre, short year);

/* Delete a Book */
void	remove(Book *b);

/* Display a Book */
void	print(Book *b);