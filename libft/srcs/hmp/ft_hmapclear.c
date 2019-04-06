/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmapclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 11:03:33 by zwang             #+#    #+#             */
/*   Updated: 2019/04/06 15:56:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhmap.h"

static void	hmapclear(t_hmap *hmap)
{
	int		i;
	t_pair	*pair;
	t_pair	*tmp;

	i = 0;
	while (true)
	{
		while (i < HASH_SPACE && !hmap->pairs[i])
			i++;
		if (i >= HASH_SPACE)
			break ;
		pair = hmap->pairs[i];
		while (pair->next)
		{
			tmp = pair;
			pair = pair->next;
			free(tmp->key);
			free(tmp->val);
			free(tmp);
		}
		free(pair->key);
		free(pair->val);
		free(pair);
		hmap->pairs[i] = NULL;
		i++;
	}
	hmap->count = 0;
}

void		ft_hmapclear(t_hmap *hmap)
{
	if (!hmap)
		return ;
	hmapclear(hmap);
}
