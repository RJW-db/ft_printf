/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utils.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 14:42:32 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/21 17:02:38 by rde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nbr, char *base, int i)
{
	int			base_len;
	long int	nb;

	nb = nbr;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', 1);
		i = 1;
	}
	base_len = (int)ft_strlen(base);
	if (nb >= base_len)
		i = ft_putnbr_base(nb / base_len, base, i);
	return (i += (int)write(1, &base[nb % base_len], 1));
}

// int	ft_putnbr_base_un(unsigned int nbr, char *base, int i)
// {
// 	int					base_len;
// 	unsigned long int	nb;

// 	nb = nbr;
// 	if (nb < 0)
// 	{
// 		nb = -nb;
// 		ft_putchar_fd('-', 1);
// 		i = 1;
// 	}
// 	base_len = ft_strlen(base);
// 	if (nb >= base_len)
// 		i = ft_putnbr_base(nb / base_len, base, i);
// 	return (i += (int)write(1, &base[nb % base_len], 1));
// }

int	ft_putstr_count(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		write(1, &s[i++], 1);
	return (i);
}

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }
