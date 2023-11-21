/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:30:33 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/21 21:11:17 by rde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
# define RED ""
# define PURPLE "\033[1;35m"
# define RESET "\033[0m"
//	man 3 prinft
//	cc -Wall -Wextra -Werror -g *.c ../ft_printf/Libft/*.c ../test/*.c ../ft_printf/*.c && ./a.out

// void	testing(char ptr)
// {
// 	ft_printf("this %c workin\n", ptr);
// }

int	main(void)
{
	// testing('Z');
	test();
	return (1);
}

// int main() {
// 	int intValue = 42;
// 	// double doubleValue = 3.14159;

// 	// Examples with the combination of flags '-0.' and field minimum width
// 	printf("1. Integer: %18d!\n", intValue);		// Left-justify, zero-padded, minimum width 8
// 	printf("2. Integer: %-18d!\n", intValue);		// Left-justify, zero-padded, minimum width 8
// 	printf("3. Integer: %++++++d\n", intValue);		// Show sign for positive values

// 	printf("\n%#x\n", 0);
// 	printf("%x\n", 5);
// 	printf("%#x\n", 5);

// 	printf("%#X\n", 0);
// 	printf("%X\n", 5);
// 	printf("%#X\n", 5);

// 	// printf("\n%x\n", "EF");
// 	// printf("%#x\n", "EF");
// 	//	edge case
// 	// printf("\n%#p\n", 5);	// to check this don't use flag -Werror


// 	printf("\n%d\n", 15);
// 	printf("%000i\n", 15);
// 	printf("\n%05d\n", 15);


// 	printf("\nhere %0.05d\n", 15);

// 	testing("is");
// 	return (0);
// }

// int	main(void)
// {
// 	markup("No Markup", 0);
// 	markup("Green Text", 32, 0);
// 	markup("Bold, Red text on Blue background", 1, 31, 44, 0);
// 	markup("Bold, Italic, Magenta text on White background", 1, 3, 35, 47, 0);
// 	return (0);
// }


/**
 * @brief printf the full width
 * @param void
*/
void	print_full_width(void)
{
	struct winsize	w;
	int				i;

	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	i = 0;
	printf(PURPLE);
	while (i++ < w.ws_col)
		printf("-");
	printf(RESET "\n");
}


void	markup(char *str, ...)
{
	va_list	style;
	int		num_styles;
	int		minus_check;

	num_styles = 0;
	va_start(style, str);
	while (va_arg(style, int) != 0)
		num_styles++;
	va_end(style);
	va_start(style, str);
	if (num_styles == 0)
		printf("\n%s\n", str);
	else if (num_styles > 0)
	{
		minus_check = va_arg(style, int);
		if (minus_check == -1 && printf("\033[45m%s\033[0m", str))
			return ;
		printf("\n\033[%d", minus_check);
		while (--num_styles)
			printf(";%d", va_arg(style, int));
		printf("m%s\033[0m\n", str);
	}
	va_end(style);
}

// markup("helloalex", 1, 2, 32, 36)
