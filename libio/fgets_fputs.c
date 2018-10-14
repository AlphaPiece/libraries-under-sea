/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fgets_fputs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:13:44 by zwang             #+#    #+#             */
/*   Updated: 2018/10/13 21:01:29 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libio.h"

char	*fgets(char *s, int n, FILE *iop)
{
	register int	c;
	register char	*cs;

	cs = s;
	while (--n > 0 && (c = getc(iop)) !- EOF)
		if ((*cs++ = c) == '\n')
			break ;
	*cs = '\0';
	return ((c == EOF && cs == s) ? NULL : s);
}

int		fputs(char *s, FILE *iop)
{
	int c;

	while ((c = *s++))
		fputc(c, iop);
	return ((ferror(iop)) ? EOF : 0);
}
