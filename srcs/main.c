/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:08:10 by aguay             #+#    #+#             */
/*   Updated: 2022/02/08 09:29:45 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "rush02.h"

int	main(int argc, char **argv)
{
	char	path[] = "srcs/english.txt";
	int		x;

	if (argc != 2 && argc != 3)
		return (0);
	else if (argc == 2)
	{
		x = ft_atoi(argv[1]);
		if (x > 0)
			ft_conversion(ft_itoa(x), path);
		else
			ft_printf("Error\n");
	}
	else if (argc == 3)
	{
		x = ft_atoi(argv[2]);
		if (x > 0)
			ft_conversion(ft_itoa(x), argv[1]);
	}
}
