#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	if (ac == 1)
		printf("No argument sent.");
	if (ac == 2)
	{
		printf("ft_putnbr : ");
		ft_putnbr(atoi(av[2]));
		printf("\n");
	}
	if (ac > 2)
		printf("Too many arguments.");
	return (0);
}
