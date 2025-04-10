#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	big[50];
	char	sma[50];

	printf("Enter two strings: ");
	scanf("%s %s", big, sma);
	printf("Original %s\n", strstr(big, sma));
	printf("Mine %s\n", ft_strstr(big, sma));
	return (0);
}
