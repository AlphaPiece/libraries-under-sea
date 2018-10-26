/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fgets.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:57:06 by zwang             #+#    #+#             */
/*   Updated: 2018/10/25 16:59:30 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libio.h"

char	*fgets(char *s, int n, FILE *iop)
{
	register int	c;
	register char	*cs;

	cs = s;
	while (--n > 0 && (c = getc(iop)) != EOF)
		if ((*cs++ = c) == '\n')
			break ;
	*cs = '\0';
	return ((c == EOF && cs == s) ? NULL : s);
}
