/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uplowx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasaha <malasaha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:43:30 by malasaha          #+#    #+#             */
/*   Updated: 2022/02/17 19:00:09 by malasaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long a, int *s)
{
	if (a < 16)
	{
		if (a < 10)
		{
			*s += ft_putchar(a + 48);
		}
		else
		{
			*s += ft_putchar(a + 87);
		}
	}
	else
	{
		ft_pointer(a / 16, s);
		ft_pointer(a % 16, s);
	}
	return (*s);
}

int	ft_lowerx(unsigned int a, int *s)
{
	if (a < 16)
	{
		if (a < 10)
		{
			*s += ft_putchar(a + 48);
		}
		else
		{
			*s += ft_putchar(a + 87);
		}
	}
	else
	{
		ft_lowerx(a / 16, s);
		ft_lowerx(a % 16, s);
	}
	return (*s);
}

int	ft_upperx(unsigned int a, int *s)
{
	if (a < 16)
	{
		if (a < 10)
		{
			*s += ft_putchar(a + 48);
		}
		else
		{
			*s += ft_putchar(a + 55);
		}
	}
	else
	{
		ft_upperx(a / 16, s);
		ft_upperx(a % 16, s);
	}
	return (*s);
}
