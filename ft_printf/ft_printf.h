/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:26:28 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/15 17:30:12 by rde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../main/main.h"
# include "./Libft/libft.h"

# include <stdarg.h>

int		ft_printf(const char *fmt, ...);
int		ft_putnbr_base(int nbr, char *base, int i);
#endif