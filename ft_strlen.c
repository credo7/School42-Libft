#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (p[i] != '\0')
		i++;
	return (i);
}
