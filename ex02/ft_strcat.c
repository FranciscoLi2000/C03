#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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
	char	str1[50];
	char	str2[50];

	printf("Enter two strings: ");
	scanf("%s %s", str1, str2);
	printf("Original %s\n", strcat(str1, str2));
	printf("Mine %s\n", ft_strcat(str1, str2));
	return (0);
}
