#include "libft.h"
#include "rush02.h"

void    ft_search_dict(char *value, char *path)
{
        int     digit;

	digit = how_much_digit(value);
	while(digit > 0)
	{
		if (digit == 1)
			ft_put_unite(value, path, &digit);
		else if (digit == 2)
			ft_put_dizaine(value, path, &digit);
		else if (digit == 3)
			ft_put_centaine(value, path, &digit);
		else if (digit <= 6)
			ft_thousand(value, path, &digit);
		else if (digit <= 9)
			ft_million(value, path, &digit);
		else if (digit == 10)
			ft_billion(value, path, &digit);
	}
        return ;
}

char	*ft_put_centaine(char *value, char *path, int *digit)
{
        char    *container;
	int	nb;

	container = malloc(50);
	container[0] = value[0];
	container[1] = '\0';
	if (container[0] != '0')
	{
		ft_simple_parse(container, path);
		nb = 100;
		ft_simple_parse(ft_itoa(nb), path);
	}
	decallage(value, 1);
	container = malloc(50);
	container[0] = value[0];
	container[1] = value[1];
	container[2] = '\0';
	nb = ft_atoi(container);
	if (nb > 0)
		ft_put_dizaine(value, path, digit);
	else
		(*digit) = (*digit) - 2;
	(*digit) = (*digit) - 1;
        return (value);
}

char	*ft_put_dizaine(char *value, char *path, int *digit)
{
        char    *container;
	int	nb;

	container = malloc(50);
	container[0] = value[0];
	container[1] = value[1];
	container[2] = '\0';
	nb = ft_atoi(container);
	if (nb < 21)
		ft_simple_parse(container, path);
	else
	{
		container[0] = value[0];
		container[1] = '0';
		ft_simple_parse(container, path);
		container = malloc(50);
		if (value[1] != '0')
		{
			container[0] = value[1];
			container[1] = '\0';
			ft_simple_parse(container, path);
		}
	}
        value = decallage(value, 2);
	(*digit) = (*digit) - 2;
        return (value);
}

char	*ft_put_unite(char *value, char *path, int *digit)
{
	char	*container;

	container = malloc(50);
	container[0] = value[0];
	ft_simple_parse(container, path);
	value = decallage(value, 1);
	(*digit) = (*digit) - 1;
	return (value);
}

void	ft_simple_parse(char *container, char *path)
{
	char	*line;

	line = parse(container, path);
	if (line == NULL)
	{
		free(container);
		ft_printf("Dict Error\n");
		return ;
	}
	else
		ft_printf("%s", line);
	free(line);
	free(container);
}
