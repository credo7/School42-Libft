#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				i;

	if (s1 == 0 && s2 == 0)
		return (0);
	if (n == 0)
		return (0);
	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n > 0 && p1[i] == p2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (p1[i] - p2[i]);
}
