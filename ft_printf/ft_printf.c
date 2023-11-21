/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:29:00 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/21 12:37:28 by rjw           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	ft_arg(va_list ap_arg)
// {
// 	int	p;

// 	p = ft_putnbr_base(va_arg(ap_arg, int), "0123456789", 0);
// 	printf("\n%d\n", p);
// 	// ft_putchar_fd(p, 1);
// }

int	ft_void_p(const char f, va_list arg)
{
	if (f == 'x')
		return (ft_putnbr_base(va_arg(arg, long int), "0123456789abcdef", 0));

	// if (f == 'u')
	// 	return (ft_putnbr_base_un(va_arg(arg, unsigned int), "0123456789", 0));
	if (f == 'd' || f == 'i')
		return (ft_putnbr_base(va_arg(arg, int), "0123456789", 0));
	if (f == 'c')
		return (write(1, &(int){va_arg(arg, int)}, 1));
	if (f == 's')
	{
		// printf("%s\n", va_arg(arg, char *));
		// int	count = ft_putstr_count(va_arg(arg, char *));
		// printf("count: %d\n", count);
		return (ft_putstr_count(va_arg(arg, char *)));
	}
	if (f == 'p')
	{
		return (ft_putnbr_base(va_arg(arg, void *), "0123456789abcdef", 0));
	}
	return (0);
}

int	ft_arg(const char *fmt, va_list ap_arg)
{
	int		i;

	i = 0;
	// printf("%s\n", va_arg(ap_arg, char *));
	// if (fmt[i] == '#' || fmt[i] == '+' || fmt[i] == '-' || fmt[i] == ' ' ||  fmt[i] == '0' || fmt[i] == '0')
	if (fmt[i] == 'd' || fmt[i] == 'i')
	{
		return (ft_void_p(fmt[i], ap_arg));
	}
	if (fmt[i] == 'u' || fmt[i] == 'x' || fmt[i] == 'X')
	{
		return (ft_void_p(fmt[i], ap_arg));
	}
	if (fmt[i] == 'c' || fmt[i] == 's' || fmt[i] == 'p')
	{
		// printf("%s\n", va_arg(ap_arg, char *));
		return (ft_void_p(fmt[i], ap_arg));
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j += ft_arg(&format[i], ap);
			// printf("j = %d\n", j);
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	if (j)
		return (j + i);
	return (0);
}
