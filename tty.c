/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:13:28 by lmarecha          #+#    #+#             */
/*   Updated: 2022/04/20 16:39:51 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// #include "Libft/libft.h"

// The isatty(int fd) function tests whether  fildes,  an  open  file
	// descriptor, is associated with a terminal device.

// file descriptors 0, 1 and 2 (aka STDIN_FILENO, STDOUT_FILENO and STDERR_FILENO)
	// are by convention set up to point to your terminal

int	main (void)
{
	printf("return of isatty(1) : %d\n", isatty(1)); // return 1 if true
	printf("return of isatty(1) : %d\n", isatty(5)); // return 0 if false
}
