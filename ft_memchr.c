#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	ch;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n-- > 0)
	{
		if (s2[i] == ch)
			return (&s2[i]);
		i++;
	}
	return (0);
}
