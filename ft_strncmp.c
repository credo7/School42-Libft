#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*(p1 + i) == '\0' || *(p2 + i) == '\0')
			return (*(p1 + i) - *(p2 + i));
		if (*(p1 + i) == *(p2 + i))
			i++;
		else
			return (*(p1 + i) - *(p2 + i));
		n--;
	}
	return (0);
}
