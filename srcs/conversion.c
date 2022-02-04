#include "rush02.h"
#include "libft.h"

void	ft_conversion(char *string, char *path)
{
	char	*sortie;
	
	sortie = ft_search_dict(string, path);
	if (sortie == NULL)
		return;
	else
		ft_printf("%s\n", sortie);
	free(sortie);
}

char	*ft_search_dict(char *value, char *path)
{
	char	*word;

	// Reste a faire l'algo pour ecrire nimportequel nombre
	word = parse(value, path);
	if (word == NULL)
		ft_printf("Dict Error\n");
	return (word);
}

