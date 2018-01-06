/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brabo-hi <brabo-hi@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 20:40:53 by brabo-hi          #+#    #+#             */
/*   Updated: 2018/01/01 22:24:11 by brabo-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helper.h"

char	*ft_add_space_s(char *str, int size)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = ft_memalloc(size + 1)))
		exit(1);
	while (str && *str)
		dest[i++] = *str++;
	while (i < size)
		dest[i++] = ' ';
	dest[i] = '\0';
	return (dest);
}

char	*ft_add_space_d(char *str, int size)
{
	char	*dest;
	char	*cpy;
	size_t	i;

	i = 0;
	cpy = str;
	if (!(dest = ft_memalloc(size + 1)))
		exit(1);
	while (size - i > ft_strlen(str))
		dest[i++] = ' ';
	while (str && *str)
		dest[i++] = *str++;
	dest[i] = '\0';
	ft_strdel(&str);
	return (dest);
}
