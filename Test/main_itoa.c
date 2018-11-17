#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);
int		ft_intsize(int n);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n%s\n", ft_intsize(atoi(av[1])), ft_itoa(atoi(av[1])));
	}
	return (0);
}
