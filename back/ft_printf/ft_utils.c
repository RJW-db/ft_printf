/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utils.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 14:42:32 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/15 17:30:17 by rde-brui      ########   odam.nl         */
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

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }
