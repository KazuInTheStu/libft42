/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:11:33 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/02 14:11:33 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset(void *ptr, int value, unsigned long num)
{
    unsigned char *p;
    unsigned char v;

    *p = ptr;
    v = (unsigned char)value;
    while (num--)
    {
        *p = v;
        p++;
    }
    return ptr;   
}