/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:13:52 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/04 02:52:54 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned long num)
{
	unsigned char	*d;
	unsigned char	*s;

	*d = dest;
	*s = src;
	while (num--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
