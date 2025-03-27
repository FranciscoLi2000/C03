#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dst_len = ft_strlen(dest);
    unsigned int src_len = ft_strlen(src);
    unsigned int remain = size - dst_len - 1; // Espacio restante en dest

    if (size <= dst_len)  // Si el espacio total es menor o igual a dst_len, no se puede concatenar
        return (src_len + size);

    unsigned int i = 0;
    while (i < remain && src[i] != '\0')
    {
        dest[dst_len + i] = src[i];
        i++;
    }
    dest[dst_len + i] = '\0';  // Añadir el terminador nulo
    return (dst_len + src_len);
}
