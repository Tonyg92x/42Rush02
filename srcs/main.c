#include "libft.h"
#include "rush02.h"

int	main(int argc, char **argv)
{
	char	path[] = "srcs/english.txt";

	if (argc != 2 && argc != 3)
		return (0);
	else if (argc == 2)
		ft_conversion(argv[1], path);
	else if (argc == 3)
		ft_conversion(argv[2], argv[1]);
}
