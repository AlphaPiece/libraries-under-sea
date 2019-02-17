/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 09:58:17 by zwang             #+#    #+#             */
/*   Updated: 2019/02/17 12:42:41 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mapremove(t_map *map, char *key)
{
	unsigned int	hashval;
	t_pair			*pair;
	t_pair			*tmp;

	if (!map || !key || !*key)
		return ;
	hashval = ft_hashstr(key, MAP_SPACE);
	pair = map->map[hashval];
	if (ft_strequ(pair->key, key))
	{
		map->map[hashval] = pair->next;
		free(pair->key);
		free(pair);
		return ;
	}
	while (pair->next && !ft_strequ(pair->next->key, key))
		pair = pair->next;
	if (pair->next)
	{
		tmp = pair->next;
		pair->next = tmp->next;
		free(tmp->key);
		free(tmp);
	}
}
