#include "libft.h"
#include <stdio.h>

void	ft_bzeroo(void *s, size_t n)
{
	while (n--)
		*((char *)s) = 0;
}


int main()
{
	int i = 0;
	char test[50];

	while (i++ < 50000000)
		ft_bzeroo(test, 40);
	return (0);
}
