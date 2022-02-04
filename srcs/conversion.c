#include "rush02.h"
#include "libft.h"

void	ft_conversion(char *string, int fd)
{
	char	*sortie;
	
	sortie = ft_search_dict(fd, string);
	if (sortie == NULL)
		ft_printf("Dict Error\n");
	else
		ft_printf("%s\n", sortie);
	free(sortie);
}

char	*ft_search_dict(int fd, char *value)
{
	char	*line;
	char	*try;
	char	*retour;
	bool	done;
	int	i;
	int	y;

	retour = malloc(1000);
	try = malloc(1000);
	done = false;
	while (done == false)
	{
		i = 0;
		line = ft_get_line(fd);
		if (line == NULL)
			break;
		while (line[i] != ':')
		{
			try[i] = line[i];
			i++;
		}
		if (ft_v_check(value, try))
		{
			i++;
			y = 0;
			while(line[i] != '\0')
				retour[y++] = line[i++];
			free(try);
			free(line);
			return (retour);
		}
		free(line);
	}
	return (NULL);
}

bool	ft_v_check(char *value, char *try)
{
	int	i;

	i = 0;
	while (value[i])
	{
		if (value[i] != try[i])
			return (false);
		i++;
	}
	return (true);
}

char	*ft_get_line(int fd)
{
	char	*retour;
	char	*character;
	int	len;
	int	i;

	i = 0;
	character = malloc(1);
	retour = malloc(1000);
	while (retour[i - 1] != '\n')
	{
		len = read(fd, character, 1);
		if (len == -1 || len == 0)
		{
			ft_printf("Dict Error\n");
			free(retour);
			return (NULL);
		}
		retour[i] = character[0];
		i++;
	}
	free(character);
	return (retour);
}

