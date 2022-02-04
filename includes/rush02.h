#ifndef RUSH02_H
# define RUSH02_H

#include <stdbool.h>

void	ft_conversion(char *string, int fd);
char	*ft_search_dict(int fd, char *value);
char	*ft_get_line(int fd);
bool	ft_v_check(char *value, char *try);

#endif
