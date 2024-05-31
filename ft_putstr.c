/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-14 12:40:41 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-14 12:40:41 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (! str)
		str = ("(null)");
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
	return (count);
}
