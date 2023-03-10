/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefernan <pefernan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:37:16 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/09 16:37:21 by pefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	*str_0;
	char	str[64];
	int		index;

	str_0 = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	index = 0;
	while (str_0[index])
	{
		str[index] = str_0[index];
		index++;
	}
	printf("Result: %s", ft_strcapitalize(str));
}
