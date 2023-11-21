/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:26:28 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/21 12:19:39 by rjw           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../main/main.h"
# include "./Libft/libft.h"

# include <stdarg.h>
# include <unistd.h>

# include <stdio.h>

int		ft_printf(const char *fmt, ...);
int		ft_putnbr_base(int nbr, char *base, int i);
int		ft_putstr_count(char *s);
int		ft_putnbr_base_un(unsigned int nbr, char *base, int i);

#endif