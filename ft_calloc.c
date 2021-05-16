#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned int	nbytes;
	void			*addr;

	nbytes = n * size;
	addr = malloc(nbytes);
	if (addr)
		ft_memset(addr, 0, nbytes);
	return (addr);
}
