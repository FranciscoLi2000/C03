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
