#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;

    // Mover a la última posición de dest
    while (dest[i] != '\0')
        i++;

    // Copiar hasta nb caracteres de src
    while (j < nb && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0'; // Asegurar el terminador nulo
    return (dest);
}
