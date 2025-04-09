/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:13:52 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/09 23:36:31 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned long num)
{
	unsigned char		*d;
	const unsigned char	*s = src;

	d = dest;
	while (num--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
