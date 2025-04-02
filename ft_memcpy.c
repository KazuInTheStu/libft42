/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:13:52 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/02 15:13:52 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, unsigned long num)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    
    while (num--)
    {
        *d = *s;
        d++;
        s++;
    }
    
    return dest;
}
