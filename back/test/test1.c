/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test1.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:33:57 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/17 13:32:17 by rde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test(void)
{
	// integer();
	ft_str();
	// printf("\n%d\n", printf("text"));
}

void	integer(void)
{
	ft_printf("%d", -21474836489);
}

void	ft_str(void)
{
	// ft_printf("check %s this good", "is");
	ft_printf("check %c this good", 'X');
}
