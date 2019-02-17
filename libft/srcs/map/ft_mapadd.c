/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:04:18 by zwang             #+#    #+#             */
/*   Updated: 2019/02/17 12:39:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mapadd(t_map *map, char *key, void *val)
{
	t_pair			*pair;
	t_pair			*head_pair;
	unsigned int	hashval;

	if (!map || !key || !*key)
		return ;
	pair = ft_pairnew(key, val);
	hashval = ft_hashstr(key, MAP_SPACE);
	head_pair = map->map[hashval];
	map->map[hashval] = pair;
	pair->next = head_pair;
	map->pair_no++;
}
