#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*p_buf;

	p_buf = (unsigned char *) s;
	i = 0;
	while (n > 0)
	{
		p_buf[i] = 0;
		i++;
		n--;
	}
}
