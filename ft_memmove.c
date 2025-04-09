/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 03:07:42 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/09 23:33:44 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, unsigned long size)
{
	unsigned long	i;

	i = 0;
	if (destination < source)
	{
		while (i < size)
		{
			((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
			i++;
		}
	}
	else
	{
		i = size;
		while (i > 0)
		{
			i--;
			((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
		}
	}
	return (destination);
}
