/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:13:52 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/04 04:12:40 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned long num)
{
	int	i;

	i = -1;
	while (++i < num)
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
	return (dest);
}
