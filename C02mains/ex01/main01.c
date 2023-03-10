/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefernan <pefernan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:37:16 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/09 16:37:21 by pefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	char	dest[20];

	src = "Awesome shhdfgjhdfhjdghjdhgj! ;)";
	printf("Source: %s\n", src);
	ft_strncpy(dest, src, sizeof(dest));
	printf("Copied: %s", dest);
}
