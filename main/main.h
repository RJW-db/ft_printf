/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:26:28 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/21 19:31:08 by rde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../ft_printf/ft_printf.h"
# include "../test/test.h"

# include <stdio.h>

void	print_full_width(void);
void	markup(char *str, ...);

char	*itoa_stack(int n, char *str_num);

#endif