/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:11:33 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/04 04:12:43 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int value, unsigned long num)
{
	unsigned char	*p;
	
	p = (unsigned char*)ptr;
	while (num--)
	{
		*p = value;
		p++;
	}
	return (ptr);
}
