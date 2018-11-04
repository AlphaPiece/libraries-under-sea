/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readlines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:03:33 by zwang             #+#    #+#             */
/*   Updated: 2018/11/04 14:49:10 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_readlines(char *file_name, char ***lines)
{
	size_t	nl;
	char	*content;
	int		fd;
	int		i;

	ft_read(file_name, &content);
	nl = ft_count_subs(content, "\n");
	free(content);
	if (!(*lines = (char **)malloc(sizeof(char *) * (nl + 1))))
		return (0);
	fd = open(file_name, O_RDONLY);
	i = 0;
	while (ft_readline(fd, *lines + i) > 0)
		i++;
	(*lines)[i] = NULL;
	if (close(fd) < 0)
		return (-1);
	return (nl);
}
