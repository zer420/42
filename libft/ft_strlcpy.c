#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (!dstsize)
		return (len);
	if (len >= dstsize)
		len = dstsize - 1;
	ft_memcpy(dst, src, len);
	dst[len] = 0;
	return (ft_strlen(src));
}
