/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:29:00 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/17 13:58:17 by rde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_void_p(char c, va_list ap_a)
{
	int		i;
	char	g;

	i = 0;
	if (c == 'c')
	{
		// g = va_arg(ap_a, int);
		// i = write(1, &g, 1);
		// i = write(1, &(va_arg(ap_a, int)), 1);
		i = write(1, &(int){va_arg(ap_a, int)}, 1);
	}
	return (i);
}

int	ft_arg(const char *fmt, va_list ap_arg)
{
	int	i;

	i = 0;
	// printf("%s\n", va_arg(ap_arg, char *));
	// if (fmt[i] == '#' || fmt[i] == '+' || fmt[i] == '-' || fmt[i] == ' ' ||  fmt[i] == '0' || fmt[i] == '0')
	// if (fmt[i] == 'd' || fmt[i] == 'i')
	// {
		
	// }
	// if (fmt[i] == 'u' || fmt[i] == 'x' || fmt[i] == 'X')
	// {
		
	// }
	if (fmt[i] == 'c' || fmt[i] == 's' || fmt[i] == 'p')
	{
		// ft_putstr_fd(va_arg(ap_arg, char *), 1);
		ft_void_p(fmt[i], ap_arg);
	}
	return (0);
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
			ft_arg(&fmt[i], ap);
		}
		else
			ft_putchar_fd(fmt[i], 1);
		i++;
	}
	return (0);
}
