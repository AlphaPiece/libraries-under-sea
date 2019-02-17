/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 11:03:33 by zwang             #+#    #+#             */
/*   Updated: 2019/02/17 12:45:05 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	mapclear(t_map *map)
{
	int		i;
	t_pair	*pair;
	t_pair	*tmp;

	i = 0;
	while (true)
	{
		while (i < MAP_SPACE && !map->map[i])
			i++;
		if (i >= MAP_SPACE)
			break ;
		pair = map->map[i];
		while (pair->next)
		{
			tmp = pair;
			pair = pair->next;
			free(tmp->key);
			free(tmp);
		}
		free(pair->key);
		free(pair);
		map->map[i] = NULL;
		i++;
	}
	map->pair_no = 0;
}

void		ft_mapclear(t_map *map)
{
	if (!map)
		return ;
	mapclear(map);
}
