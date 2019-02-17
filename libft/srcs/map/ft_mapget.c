/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 10:04:39 by zwang             #+#    #+#             */
/*   Updated: 2019/02/17 13:22:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mapget(t_map *map, char *key)
{
	t_pair	*pair;

	if (!map || !key || !*key)
		return (NULL);
	pair = map->map[ft_hashstr(key, MAP_SPACE)];
	while (pair && !ft_strequ(pair->key, key))
		pair = pair->next;
	if (pair)
		return (pair->val);
	return (NULL);
}
