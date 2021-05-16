#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*p;
	char			*p_last;
	unsigned char	ch;
	int				i;

	p = (unsigned char *)s;
	i = 0;
	ch = c;
	p_last = 0;
	while (*(p + i))
	{
		if (*(p + i) == ch)
			p_last = (char *)(p + i);
		i++;
	}
	if (*(p + i) == ch)
		return ((char *)(p + i));
	else
		return (p_last);
}
