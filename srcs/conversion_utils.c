#include "libft.h"
#include "rush02.h"

int     how_much_digit(char *x)
{
        int     i;

        i = 0;
        while(x[i])
                i++;
        return (i);
}

char    *ft_get_line(int fd)
{
        char    *retour;
        char    *character;
        int     len;
        int     i;

        i = 0;
        character = malloc(1);
        retour = malloc(1000);
        while (retour[i - 1] != '\n')
        {
                len = read(fd, character, 1);
                if (len == -1 || len == 0)
                {
			free(character);
                        free(retour);
                        return (NULL);
                }
                retour[i] = character[0];
                i++;
        }
        free(character);
        return (retour);
}

char	*parse(char *value, char *path)
{
	char	*retour;
	char	*line;
	int	fd;

	retour = malloc(100);
	fd = open(path, O_RDONLY, 0600);
	while (true)
	{
		line = ft_get_line(fd);
		if (line == NULL)
			return (NULL);
		if (check_idem(line, value))
		{
			retour = letter(line, retour);
			break;
		}
		free(line);
	}
	close(fd);
	return (retour);
}

bool	check_idem(char *line, char *value)
{
	int	i;

	i = 0;
	while (line[i] != ':' || value[i])
	{
		if (line[i] != value[i])
			return (false);
		i++;
	}
	return (true);
}
