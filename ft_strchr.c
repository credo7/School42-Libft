#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p;
	unsigned char	ch;
	int				i;

	i = 0;
	p = (unsigned char *)s;
	ch = c;
	while (*(p + i) != ch)
	{
		if (*(p + i) == '\0')
			return (0);
		i++;
	}
	if (*(p + i) == ch)
		return ((char *)(p + i));
	else
		return (0);
}
