/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:55:08 by pongsrit          #+#    #+#             */
/*   Updated: 2023/04/03 18:55:21 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function ft_memcmp compare byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.

Return zero if both are identical,
otherwise the differnce between the first two differing bytes.
Zero-lenght strings are identical.*/

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
