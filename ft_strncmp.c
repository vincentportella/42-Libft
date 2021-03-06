/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vportell <vportell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/15 20:24:40 by schapuis          #+#    #+#             */
/*   Updated: 2016/10/31 17:22:54 by vportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s11;
	unsigned char	*s12;

	s11 = (unsigned char *)s1;
	s12 = (unsigned char *)s2;
	i = 0;
	while ((s11[i] || s12[i]) && (i < n))
	{
		if (s11[i] != s12[i])
			return (s11[i] - s12[i]);
		i++;
	}
	return (0);
}
