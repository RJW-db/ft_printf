/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test1.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:33:57 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/21 21:11:23 by rde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

typedef enum specifier {
	INTEGER,
	CHAR,
	STRING,
	POINTER
}	t_specifier;


void	tester(void *input, t_specifier data_type)
{
	markup(" test --->", 1, 0);
	markup("Original printf", 32, 0);
	if (data_type == INTEGER)
	{
		printf("og = %d\n", printf("number: %d\n", (int)input));
		markup("Custom printf", 32, 0);
		printf("my = %d\n", ft_printf("number: %d\n", (int)input));
	}
	// if (data_type == "c")
	// {
	// 	printf("og = %d\n", printf("char: %c\n", (char)input));
	// 	markup("Custom printf", 32, 0);
	// 	printf("my = %d\n", ft_printf("char: %c\n", (char)input));
	// }
	// if (data_type == "s")
	// {
	// 	printf("og = %d\n", printf("string: %s\n", (char *)input));
	// 	markup("Custom printf", 32, 0);
	// 	printf("my = %d\n", ft_printf("string: %s\n", (char *)input));
	// }
	// // if (data_type == "p")
	// // {
	// // 	printf("og = %d\n", printf("pointer: %p\n", (char *)input));
	// // 	markup("Custom printf", 32, 0);
	// // 	printf("my = %d\n", ft_printf("pointer: %p\n", (char *)input));
	// // }
	// // if (data_type == "u")
	// // {
	// // 	printf("og = %d\n", printf("u: %u\n", (unsigned long *)input));
	// // 	markup("Custom printf", 32, 0);
	// // 	printf("my = %d\n", ft_printf("u: %u\n", (unsigned long *)input));
	// // }
}

void	integer(void)
{
	// int	nbr = 5555555;
	// int	nbr = -21474836489;
	int	nbr = 2147483647;
	// int	nbr = 0;

	// markup("Original printf", 32, 0);
	// printf("og = %d\n", printf("number: %d\n", nbr));

	// markup("Custom printf", 32, 0);
	// printf("og = %d\n", ft_printf("number: %d\n", nbr));
	// tester(nbr, 'i');
	// tester(2147483647, 'i');
	tester(2147483647, INTEGER);
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

// void	long_x(void)
// {
// 	// unsigned int	nbr = -2147483649;
// 	// int	nbr = -21474836489;
// 	// int	nbr = 2147483647;
// 	// int	nbr = 4294967295;
// 	// int	nbr = 0;
// 	long int	nbr = 2147483647;

// 	markup("Original printf", 32, 0);
// 	printf("og = %d\n", printf("number: %x\n", nbr));

// 	markup("Custom printf", 32, 0);
// 	printf("og = %d\n", ft_printf("number: %x\n", nbr));
// }

void	chr(void)
{
	char	ptr = 'Z';

	tester(ptr, "c");
	// markup("Original printf", 32, 0);
	// printf("og = %d\n", printf("this %c workin\n", ptr));

	// markup("Custom printf", 32, 0);
	// printf("my = %d\n", ft_printf("this %c workin\n", ptr));
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

	markup("Original printf", 32, 0);
	printf("og = %d\n", printf("%p\n", str));

	markup("Custom printf", 32, 0);
	printf("my = %d\n", ft_printf("%p\n", str));
}

void	test(void)
{
	print_full_width();
	integer();
	// unsigned_dec();
	// long_x();
	// chr();
	// str();
	// void_ptr();
}

//	/** + enter

// #define text "-"
// sizeof text = hetzelfde als strlen