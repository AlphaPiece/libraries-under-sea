/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readlines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:03:33 by zwang             #+#    #+#             */
/*   Updated: 2019/02/06 22:42:41 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_readlines(char *file_name, char ***lines)
{
	int		nl;
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
