#include "libft.h"
#include "rush02.h"

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2 && argc != 3)
		return (0);
	if (argc == 2)
	{
		fd = open("srcs/englist.txt", O_RDONLY, 0600);
		if (fd == -1)
		{
			ft_printf("Open Error\n");
			return (0);
		}
		ft_conversion(argv[1], fd);
		close(fd);
		return (0);
	}
	if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY, 0600);
		if (fd == -1)
		{
			ft_printf("Open Error\n");
			return (0);
		}
		ft_conversion(argv[2], fd);
		close(fd);
	}
}
