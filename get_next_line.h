#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <unistd.h>
# include <stdlib.h>

typedef struct s_butter
{
	unsigned char	*butter[BUFFER_SIZE];
	int				fd;
	struct s_butter *next;
}	t_buffer;

char	*get_next_line(int fd);

#endif
