/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:29:00 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/15 17:30:22 by rde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_arg(va_list ap_arg)
{
	int	p;

	p = ft_putnbr_base(va_arg(ap_arg, int), "0123456789", 0);
	printf("\n%d\n", p);
	// ft_putchar_fd(p, 1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, fmt);
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			ft_arg(ap);
		}
		i++;
	}
	return (0);
}
