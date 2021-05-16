#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int s)
{
	unsigned int	i;
	unsigned int	c;

	if (src == 0 || dst == 0)
		return (0);
	i = 0;
	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	if (s <= 0)
		return (c);
	while (src[i] != '\0' && i < (s - 1))
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (c);
}
