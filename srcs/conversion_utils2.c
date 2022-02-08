/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:08:00 by aguay             #+#    #+#             */
/*   Updated: 2022/02/08 09:13:25 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "rush02.h"

char	*letter(char *line, char *retour)
{
	int	i;
	int	y;

	y = 0;
	i = 0;
	while (line[i] && line[i - 1] != ':')
		i++;
	while (line[i] && line[i] != '\n')
		retour[y++] = line[i++];
	while (retour[y])
		retour[y++] = '\0';
	return (retour);
}
