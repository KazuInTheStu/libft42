/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:59:01 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/02 13:59:01 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int n)
{
    return ((n >= 0 && n <= 127));
}