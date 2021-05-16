#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
				 int c, size_t n)
{
	int				i;
	unsigned char	d;
	unsigned char	*p_1;
	unsigned char	*p_2;

	i = 0;
	d = (unsigned char)c;
	p_1 = (unsigned char *)dst;
	p_2 = (unsigned char *)src;
	while (n > 0)
	{
		*(p_1 + i) = *(p_2 + i);
		if (*(p_1 + i) == d)
			return (p_1 + i + 1);
		i++;
		n--;
	}
	return (0);
}
