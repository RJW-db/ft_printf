/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-brui <rde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/15 13:30:33 by rde-brui      #+#    #+#                 */
/*   Updated: 2023/11/15 19:02:12 by rde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

//	man 3 prinft
//	cc -Wall -Wextra -Werror -g *.c ../ft_printf/Libft/*.c ../test/*.c ../ft_printf/*.c && ./a.out
// int	main(void)
// {
// 	test();
// 	return (1);
// }

#include <stdio.h>

int main() {
    int intValue = 42;
    // double doubleValue = 3.14159;

    // Examples with the combination of flags '-0.' and field minimum width
    printf("1. Integer: %18d!\n", intValue);        // Left-justify, zero-padded, minimum width 8
    printf("2. Integer: %-18d!\n", intValue);        // Left-justify, zero-padded, minimum width 8
    printf("3. Integer: %++++++d\n", intValue);          // Show sign for positive values

	printf("\n%#x\n", 0);
	printf("%x\n", 5);
	printf("%#x\n", 5);

	printf("%#X\n", 0);
	printf("%X\n", 5);
	printf("%#X\n", 5);

	printf("\n%x\n", "EF");
	printf("%#x\n", "EF");
	//	edge case
	// printf("\n%#p\n", 5);	// to check this don't use flag -Werror


	printf("\n%d\n", 15);
	printf("%000i\n", 15);
	printf("\n%05d\n", 15);


    return 0;
}

