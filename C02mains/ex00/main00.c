/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefernan <pefernan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:37:16 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/09 16:37:21 by pefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	*srctest;
	char	dest[16];

	src = "Please, Panic!";
	srctest = "Please, Panic!\n";
	printf("Source: %s\n", src);
	ft_strcpy(dest, src);
	printf("Copied: %s\n\n", dest);
	printf("Result using original strcpy function\n");
	printf("Source: %s", srctest);
	strcpy(dest, srctest);
	printf("Copied: %s\n\n", dest);
	return (1);
}
