/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test1.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:33:57 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/23 12:33:18 by rjw           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

typedef enum specifier {
	INTEGER,
	CHAR,
	STRING,
	POINTER,
	UNSIGNED_INT,
	OCTAL,
	SMALL_X,
	BIG_X
}	t_specifier;


void	tester(void *input, t_specifier data_type)
{
	markup(" test --->", 1, 0);
	markup("Original printf", 32, 0);
	if (data_type == INTEGER)
	{
		printf("og = %d\n", printf("number: %d\n", *(int *)input));
		markup("Custom printf", 32, 0);
		printf("my = %d\n", ft_printf("number: %d\n", *(int *)input));
	}
	if (data_type == CHAR)
	{
		printf("og = %d\n", printf("char: %c\n", *(char *)input));
		markup("Custom printf", 32, 0);
		printf("my = %d\n", ft_printf("char: %c\n", *(char *)input));
	}
	if (data_type == STRING)
	{
		printf("og = %d\n", printf("string: %s\n", (char *)input));
		markup("Custom printf", 32, 0);
		printf("my = %d\n", ft_printf("string: %s\n", (char *)input));
	}
	if (data_type == POINTER)
	{
		printf("og = %d\n", printf("pointer: %p\n", (char *)input));
		markup("Custom printf", 32, 0);
		printf("my = %d\n", ft_printf("pointer: %p\n", (char *)input));
	}
	if (data_type == UNSIGNED_INT)
	{
		printf("og = %d\n", printf("u: %u\n", *(unsigned int *)input));
		markup("Custom printf", 32, 0);
		printf("my = %d\n", ft_printf("u: %u\n", *(unsigned int *)input));
	}
	if (data_type == OCTAL)
	{
		printf("og = %d\n", printf("o: %o\n", *(unsigned int *)input));
		markup("Custom printf", 32, 0);
		printf("my = %d\n", ft_printf("o: %o\n", *(unsigned int *)input));
	}
	if (data_type == BIG_X)
	{
		printf("og = %d\n", printf("o: %X\n", *(unsigned int *)input));
		markup("Custom printf", 32, 0);
		printf("my = %d\n", ft_printf("o: %X\n", *(unsigned int *)input));
	}
}

void	integer(void)
{
	// int	nbr = 5555555;
	// int	nbr = -21474836489;
	// long int	nbr = -21474836489;
	int	nbr = INT_MIN;
	// int	nbr = 0;

	// markup("Original printf", 32, 0);
	// printf("og = %d\n", printf("number: %d\n", nbr));

	// markup("Custom printf", 32, 0);
	// printf("og = %d\n", ft_printf("number: %d\n", nbr));
	// tester(nbr, 'i');
	// tester(2147483647, 'i');
	tester(&nbr, INTEGER);
}

void	unsigned_dec(void)
{
	// unsigned int	nbr = -2147483649;
	// int	nbr = -21474836489;
	// int	nbr = 2147483647;
	// int	nbr = 4294967295;
	// int	nbr = 0;
	unsigned int	nbr = -1;

	tester(&nbr, UNSIGNED_INT);
	// markup("Original printf", 32, 0);
	// printf("og = %u\n", printf("number: %u\n", nbr));

	// markup("Custom printf", 32, 0);
	// printf("og = %u\n", ft_printf("number: %u\n", nbr));
}

void	big_x(void)
{
	// unsigned int	nbr = -2147483649;
	// int	nbr = -21474836489;
	// int	nbr = 2147483647;
	// int	nbr = 4294967295;
	// int	nbr = 0;
	// unsigned int	nbr = 2147483647;
	unsigned int	nbr = 177;

	tester(&nbr, BIG_X);
	// markup("Original printf", 32, 0);
	// printf("og = %d\n", printf("number: %x\n", nbr));

	// markup("Custom printf", 32, 0);
	// printf("og = %d\n", ft_printf("number: %x\n", nbr));
}

void	chr(void)
{
	char	ptr = 'Z';

	tester(&ptr, CHAR);
	// markup("Original printf", 32, 0);
	// printf("og = %d\n", printf("this %c workin\n", ptr));

	// markup("Custom printf", 32, 0);
	// printf("my = %d\n", ft_printf("this %c workin\n", ptr));
}

void	str(void)
{
	char	*str = "a beautiful";

	tester(str, STRING);
	// markup("Original printf", 32, 0);
	// printf("og = %d\n", printf("What %s day\n", str));

	// markup("Custom printf", 32, 0);
	// printf("my = %d\n", ft_printf("What %s day\n", str));
}

void	void_ptr(void)
{
	char	*str = "";

	tester(str, POINTER);
	// markup("Original printf", 32, 0);
	// printf("og = %d\n", printf("%p\n", str));

	// markup("Custom printf", 32, 0);
	// printf("my = %d\n", ft_printf("%p\n", str));
}
void	octal(void)
{
	// unsigned int	nbr = 23431124;
	// unsigned int	nbr = 0;
	unsigned int	nbr = -1;

	tester(&nbr, OCTAL);
}

void	test(void)
{
	print_full_width();
	// integer();
	// unsigned_dec();
	// octal();
	// unsigned_dec();
	// big_x();
	// chr();
	// str();
	// void_ptr();
	
	markup("Original printf", 32, 0);
	printf("og = %d\n", printf("%%\n"));

	markup("Custom printf", 32, 0);
	printf("my = %d\n", ft_printf("%%\n"));
}

//	/** + enter

// #define text "-"
// sizeof text = hetzelfde als strlen

