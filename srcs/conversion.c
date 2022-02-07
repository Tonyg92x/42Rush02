#include "rush02.h"
#include "libft.h"

void	ft_conversion(char *string, char *path)
{
	ft_search_dict(string, path);
}

char	*decallage(char *value, int nb)
{
	int	i;

	while(nb > 0)
	{
		i = 0;
		while (value[i + 1])
		{
			value[i] = value[i + 1];
			i++;
		}
		nb--;
	}
	value[i] = '\0';
	return (value);
}

char	*fill_digit(char *value, char *container, int nb)
{
	int	i;

	i = 0;
	while(nb > 0)
	{
		container[i] = value[i];
		nb--;
	}
	return (container);
}

