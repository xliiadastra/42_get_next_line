#include "get_next_line.h"

void	backup_line(char *read_str)
{
}

char	*get_next_line(int fd)
{
	static char	*milk;
	char		*butter[BUFFER_SIZE];

	if (fd < 0 || fd > 256 || BUFFER_SIZE < 0)
		return (NULL);
	read(fd, butter, BUFFER_SIZE);
	return (milk);
}
