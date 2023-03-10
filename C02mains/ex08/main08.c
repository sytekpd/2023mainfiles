/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefernan <pefernan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:37:16 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/09 16:37:21 by pefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	*str;
	char	str_2[40];
	int		index;

	str = "KeEP SwIMMING! Don't DroWn *-+-+-* <3!";
	index = 0;
	while (str[index])
	{
		str_2[index] = str[index];
		index++;
	}
	printf("String: %s\n", str);
	printf("Lower Case: %s", ft_strlowcase(str_2));
}
