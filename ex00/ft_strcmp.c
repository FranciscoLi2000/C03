#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0') // Comprobar ambos hasta que uno termine
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]); // Diferencia final si no son iguales en longitud
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[50];
	char	str2[50];

	printf("Enter two strings: ");
	scanf("%s %s", str1, str2);
	printf("Original %i\n", strcmp(str1, str2));
	printf("Mine %i\n", ft_strcmp(str1, str2));
	return (0);
}
