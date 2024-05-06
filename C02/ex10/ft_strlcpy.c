/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:42:19 by ntozzi            #+#    #+#             */
/*   Updated: 2024/05/04 19:20:23 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[i] != '\0' && i < size)
	{
		dest[k + i] = src[i];
		i++;
		k++;
	}
	if (i < size - 1)
		dest[i] = 0;
	else
		dest[size - 1] = 0;
	return (i);
}
