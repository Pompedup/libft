#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	if (ac == 1)
		printf("No argument sent.");
	if (ac == 2)
	{
		if (ft_strlen(av[1] > 1)
			printf("Please send only one char.");
		else
		{
			printf("ft_putchar : ");
			ft_putchar(av[1]);
			printf("\n");
		}
	}

}
