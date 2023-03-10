/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefernan <pefernan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:37:16 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/09 16:37:21 by pefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("Upper-Alpha String: %d\n",
		ft_str_is_uppercase("THISISANUPPERCASESENTECE"));
	printf("Non-Upper-Alpha String: %d",
		ft_str_is_uppercase("ThisISNo3ANUpperCASE"));
}
