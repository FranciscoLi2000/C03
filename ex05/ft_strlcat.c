#include <unistd.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	remain;
	unsigned int	i;

	dst_len = strlen(dest);
	src_len = strlen(src);
	remain = size - dst_len - 1; /* Espacio restante en dest */
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (i < remain && src[i] != '\0')
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}

#include <stdio.h>

int	main(void)
{
	unsigned int	size;
	char	str1[size];
	char	str2[50];

	printf("Enter two strings and an integer: ");
	scanf("%s %s %u", str1, str2, &size);
//	printf("Original %u\n", strlcat(str1, str2, size));
	printf("Mine %u\n", ft_strlcat(str1, str2, size));
	return (0);
}
