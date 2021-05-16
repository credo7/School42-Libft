#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*p_1;
	unsigned char	*p_2;

	if (dest == 0 && src == 0)
		return (dest);
	p_1 = (unsigned char *)dest;
	p_2 = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		*(p_1 + i) = *(p_2 + i);
		i++;
		n--;
	}
	return (p_1);
}
