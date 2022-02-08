/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_search_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:08:05 by aguay             #+#    #+#             */
/*   Updated: 2022/02/08 09:46:28 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "rush02.h"

void	ft_thousand(char *value, char *path, int *digit)
{
	char	*thousand;
	int		x;

	if (value[0] == '0' && value[1] == '0' && value[2] == '0')
	{
		(*digit) = (*digit) - 3;
		decallage(value, 3);
		return ;
	}
	x = 1000;
	thousand = ft_itoa(x);
	if ((*digit) == 4)
		ft_put_unite(value, path, digit);
	else if ((*digit) == 5)
	{
		ft_put_dizaine(value, path, digit);
		decallage(value, 1);
	}
	else if ((*digit) == 6)
	{
		ft_put_centaine(value, path, digit);
		decallage(value, 2);
	}
	ft_simple_parse(thousand, path);
}

void	ft_million(char *value, char *path, int *digit)
{
	char	*million;
	int		x;

	if (value[0] == '0' && value[1] == '0' && value[2] == '0')
	{
		(*digit) = (*digit) - 3;
		decallage(value, 3);
		return ;
	}
	x = 1000000;
	million = ft_itoa(x);
	if ((*digit) == 7)
		ft_put_unite(value, path, digit);
	else if ((*digit) == 8)
	{
		ft_put_dizaine(value, path, digit);
		decallage(value, 1);
	}
	else if ((*digit) == 9)
	{
		decallage(value, 2);
		ft_put_centaine(value, path, digit);
	}
	ft_simple_parse(million, path);
	while(value[0] == '0')
	{
		(*digit) = (*digit) - 1;
		decallage(value, 1);
	}
}

void	ft_billion(char *value, char *path, int *digit)
{
	char	*billion;
	int		x;

	x = 1000000000;
	billion = ft_itoa(x);
	ft_put_unite(value, path, digit);
	ft_simple_parse(billion, path);
}
