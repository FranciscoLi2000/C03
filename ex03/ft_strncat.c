#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	n;
	char	str1[50];
	char	str2[50];

	printf("Enter two strings and an integer: ");
	scanf("%s %s %u", str1, str2, &n);
	printf("Original %s\n", strncat(str1, str2, n));
	printf("Mine %s\n", ft_strncat(str1, str2, n));
	return (0);
}
