#include "exam_rank02.h"

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (to_find[j] != '\0' && str[i + j] != '\0')
        {
            if (str[i + j] == to_find[j])
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}