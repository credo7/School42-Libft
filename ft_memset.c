#include "libft.h"

void	*ft_memset(void	*buf, char z, size_t bytes)
{
	int				i;
	unsigned char	*p_buf;

	i = 0;
	p_buf = (unsigned char *)buf;
	while (bytes > 0)
	{
		p_buf[i] = z;
		i++;
		bytes--;
	}
	return (buf);
}
