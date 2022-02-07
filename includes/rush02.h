#ifndef RUSH02_H
# define RUSH02_H

#include <stdbool.h>

void	ft_conversion(char *string, char *path);
void	ft_search_dict(char *value, char *path);
char	*ft_get_line(int fd);
int	how_much_digit(char *x);
char	*parse(char *value, char *path);
bool	check_idem(char *line, char *value);
char	*letter(char *line, char *retour);
char	*fill_digit(char *value, char *container, int nb);
char	*decallage(char *value, int nb);
char	*ft_put_unite(char *value, char *path, int *digit);
char	*ft_put_dizaine(char *value, char *path, int *digit);
char	*ft_put_centaine(char *value, char *path, int *digit);
void	ft_simple_parse(char *container, char *path);
void	ft_thousand(char *value, char *path, int *digit);
void	ft_million(char *value, char *path, int *digit);
void	ft_billion(char *value, char *path, int *digit);
#endif
