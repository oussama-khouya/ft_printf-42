/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhouya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:14:31 by okhouya           #+#    #+#             */
/*   Updated: 2025/11/13 18:14:38 by okhouya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	unsigned long	n;
	int				len;

	if (!p)
		return (ft_putstr("(nil)"));
	n = (unsigned long)p;
	len = 0;
	len += ft_putstr("0x");
	len += ft_puthex(n, 'x');
	return (len);
}
