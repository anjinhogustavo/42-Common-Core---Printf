/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeradd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-24 10:53:09 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-24 10:53:09 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_pointeradd(unsigned long nbr)
{
	int	count;

	count = 0;
	if (nbr == "\0")
		ft_putstr("(nill)");
	count += ft_putstr("0x");
	count += ft_hexadecimal(nbr, 'x');
	return (count);
}
