/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:53:22 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/08 20:53:22 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	dst_len;
	unsigned long	src_len;

	if (!dst && size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (src[j] && i + 1 < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dst_len + src_len);
}
