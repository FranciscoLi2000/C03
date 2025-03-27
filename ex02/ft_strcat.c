#include <unistd.h>

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    // Mover a la última posición de dest
    while (dest[i] != '\0')
        i++;

    // Copiar src a dest
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0'; // Agregar el terminador nulo
    return (dest);
}
