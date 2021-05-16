#include "libft.h"

int	ft_toupper(int ch)
{
	int	i;

	if (ch >= 97 && ch <= 122)
	{
		i = ch - 32;
		return (i);
	}
	return (ch);
}
