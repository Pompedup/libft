#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n);

int	main(int ac, char **av)
{
	char dest[50];
	char dest2[50];
	int size;
	int i;

	size = atoi(av[2]);
	i = 0;
	while (i < 5)
	{
		dest2[i] = 'B';
		dest[i] = 'A';
		i++;
	}
	while (i < 50)
	{
		dest2[i] = '\0';
		dest[i] = '\0';
		i++;
	}
	if (ac == 3)
		printf("dest : %s\ndest2 : %s\n", dest, dest2);
		printf("strlcat : %d\nft_strlcat : %d\n", strlcat(dest, av[1], size), ft_strlcat(dest2, av[1], size));
		printf("dest : %s\ndest2 : %s\n", dest, dest2);
	return (0);
}
