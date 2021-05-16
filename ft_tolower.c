#include "libft.h"

int	ft_tolower(int c)
{
	int	i;

	if (c >= 65 && c <= 90)
	{
		i = c + 32;
		return (i);
	}
	return (c);
}
