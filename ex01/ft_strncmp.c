#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0') // Comparar hasta `n` o hasta el final
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n) // Comparación extra en caso de longitudes diferentes
		return (s1[i] - s2[i]);
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	nb;
	char	str1[50];
	char	str2[50];

	printf("Enter two string and an integer: ");
	scanf("%s %s %u", str1, str2, &nb);
	printf("Original %u\n", strncmp(str1, str2, nb));
	printf("Mine %u\n", ft_strncmp(str1, str2, nb));
	return (0);
}
