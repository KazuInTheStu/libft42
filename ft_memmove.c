/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 03:07:42 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/04 04:12:36 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *destination, const void *source, unsigned long size)
{
	int	i;

	i = -1;
	if (destination < source)
	{
		while (++i < size)
			*(unsigned char *)(destination + i) = *(unsigned char *)(source
					+ i);
	}
	else
	{
		while (size--)
			(*(unsigned char *)(destination + size
						- 1)) = (*(unsigned char *)(source + size - 1));
	}
	return (destination);
}
