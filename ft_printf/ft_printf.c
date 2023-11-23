/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:29:00 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/23 16:45:35 by rde-brui      ########   odam.nl         */
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
		return (ft_putnbr_base_un(va_arg(arg, long int), "0123456789abcdef", 0));
	if (f == 'X')
		return (ft_putnbr_base_un(va_arg(arg, long int), "0123456789ABCDEF", 0));
	if (f == 'u')
		return (ft_putnbr_base_un(va_arg(arg, unsigned int), "0123456789", 0));
	if (f == 'd' || f == 'i')
		return (ft_putnbr_base(va_arg(arg, int), "0123456789", 0));
	// if (f == 'o')
	// 	return (ft_putnbr_base_un(va_arg(arg, unsigned int), "01234567", 0));
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
		return (write(1, "0x", 2) + ft_putnbr_base(va_arg(arg, unsigned long), "0123456789abcdef", 0));
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
	if (fmt[i] == 'o' || fmt[i] == 'u' || fmt[i] == 'x' || fmt[i] == 'X')
	{
		return (ft_void_p(fmt[i], ap_arg));
	}
	if (fmt[i] == 'c' || fmt[i] == 's' || fmt[i] == 'p')
	{
		// printf("%s\n", va_arg(ap_arg, char *));
		return (ft_void_p(fmt[i], ap_arg));
	}
	if (fmt[i] == '%')
	{
		return (write(STDOUT_FILENO, "%%", 1));
	}
	return (0);
}

int	ft_printf(const char *op, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, op);
	while (*op != '\0')
	{
		if (*op == '%')
		{
			op++;
			i += ft_arg(op, ap);

		}
		else
			i += write(1, op, 1);
		op++;
	}
	return (i);
}
