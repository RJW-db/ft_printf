/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test1.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:33:57 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/21 12:37:08 by rjw           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// void	print_full_width(void)
// {
// 	struct winsize	w;
// 	int				i;

void	integer(void)
{
	int	nbr = 5555555;
	// int	nbr = -21474836489;
	// int	nbr = 2147483647;
	// int	nbr = 0;
	
	markup("Original printf", 32, 0);
	printf("og = %d\n", printf("number: %d\n", nbr));

	markup("Custom printf", 32, 0);
	printf("og = %d\n", ft_printf("number: %d\n", nbr));
}

void	unsigned_dec(void)
{
	// unsigned int	nbr = -2147483649;
	// int	nbr = -21474836489;
	// int	nbr = 2147483647;
	// int	nbr = 4294967295;
	// int	nbr = 0;
	int	nbr = -1;
	
	markup("Original printf", 32, 0);
	printf("og = %u\n", printf("number: %u\n", nbr));

	markup("Custom printf", 32, 0);
	printf("og = %u\n", ft_printf("number: %u\n", nbr));
}

void	long_x(void)
{
	// unsigned int	nbr = -2147483649;
	// int	nbr = -21474836489;
	// int	nbr = 2147483647;
	// int	nbr = 4294967295;
	// int	nbr = 0;
	long int	nbr = 2147483647;
	
	markup("Original printf", 32, 0);
	printf("og = %x\n", printf("number: %x\n", nbr));

	markup("Custom printf", 32, 0);
	printf("og = %x\n", ft_printf("number: %x\n", nbr));
}

void	chr(void)
{
	char	ptr = 'Z';

	markup("Original printf", 32, 0);
	printf("og = %d\n", printf("this %c workin\n", ptr));

	markup("Custom printf", 32, 0);
	printf("my = %d\n", ft_printf("this %c workin\n", ptr));
}

void	str(void)
{
	char	*str = "a beautiful";

	markup("Original printf", 32, 0);
	printf("og = %d\n", printf("What %s day\n", str));

	markup("Custom printf", 32, 0);
	printf("my = %d\n", ft_printf("What %s day\n", str));
}

void	void_ptr(void)
{
	char	*str;

	// markup("Original printf", 32, 0);
	// printf("og = %d\n", printf("%p\n", str));

	markup("Custom printf", 32, 0);
	printf("my = %d\n", ft_printf("%p\n", str));
}

void	test(void)
{
	print_full_width();
	// integer();
	// unsigned_dec();
	long_x();
	// chr();
	// str();
	// void_ptr();
}

