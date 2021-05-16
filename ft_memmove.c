#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_1;
	unsigned char	*p_2;
	size_t			i;

	if (dst == 0 && src == 0)
		return (dst);
	p_1 = (unsigned char *)src;
	p_2 = (unsigned char *)dst;
	i = 0;
	if (p_2 > p_1)
	{
		while (len-- > 0)
		{
			p_2[len] = p_1[len];
		}
	}
	else
	{
		while (i < len)
		{
			p_2[i] = p_1[i];
			i++;
		}
	}
	return (p_2);
}
