/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:44:16 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/09 23:39:13 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;

	if (!dst || !src)
		return (0);
	d = (unsigned char *)dst;
	while (*s && size > 1)
	{
		*d = *s;
		d++;
		s++;
		size--;
	}
	if (size > 0)
		*d = '\0';
	while (*s)
		s++;
	return (s - (unsigned char *)src);
}
