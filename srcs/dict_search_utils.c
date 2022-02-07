#include "libft.h"
#include "rush02.h"

void	ft_thousand(char *value, char *path, int *digit)
{
	char	*thousand;
	int	x;

	ft_printf("%d\n", (*digit));
	x = 1000;
	thousand = ft_itoa(x);
	if ((*digit) == 4)
		ft_put_unite(value, path, digit);
	else if ((*digit) == 5)
		ft_put_dizaine(value, path, digit);
	else if ((*digit) == 6)
		ft_put_centaine(value, path, digit);
	ft_printf("%d\n", (*digit));
	ft_simple_parse(thousand, path);
}

void	ft_million(char *value, char *path, int *digit)
{
	char    *million;
	int	x;

	x = 1000000;
	million = ft_itoa(x);
        if ((*digit) == 7)
                ft_put_unite(value, path, digit);
        else if ((*digit) == 8)
                ft_put_dizaine(value, path, digit);
        else if ((*digit) == 9)
                ft_put_centaine(value, path, digit);
        ft_simple_parse(million, path);
        (*digit) =- 3;
}

void	ft_billion(char *value, char *path, int *digit)
{
	char    *billion;
        int     x;

        x = 10000000;
        billion = ft_itoa(x);
	ft_put_unite(value, path, digit);
        ft_simple_parse(billion, path);
        (*digit) =- 1;
}