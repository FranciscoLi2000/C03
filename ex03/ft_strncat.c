#include "exam_rank02.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (i < nb && dest[i] != '\0')
		i++;
	while (i < nb && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
