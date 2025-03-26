#include "exam_rank02.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	remain;
	unsigned int	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	remain = size - dst_len - 1; /* 计算两个字符串相接后的可能的剩余内存空间 */
	if (remain > 0)
	{
		i = 0;
		while (i < remain && src[i] != '\0')
		{
			dest[dst_len + i] = src[i];
			i++;
		}
		dest[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}
