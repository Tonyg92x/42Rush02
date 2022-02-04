#ifndef RUSH02_H
# define RUSH02_H

#include <stdbool.h>

void	ft_conversion(char *string, char *path);
char	*ft_search_dict(char *value, char *path);
char	*ft_get_line(int fd);
int	how_much_digit(char *x);
char	*parse(char *value, char *path);
bool	check_idem(char *line, char *value);
char	*letter(char *line, char *retour);

#endif
