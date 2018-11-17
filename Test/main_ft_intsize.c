#include <stdio.h>
#include <stdlib.h>

int	ft_intsize(int n);

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("atoi : %d\nintsize : %d\n", atoi (av [1]), ft_intsize(atoi(av[1])));
	return (0);
}
