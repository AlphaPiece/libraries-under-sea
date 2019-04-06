/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmapremove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 09:58:17 by zwang             #+#    #+#             */
/*   Updated: 2019/04/06 15:55:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhmap.h"

void	ft_hmapremove(t_hmap *hmap, char *key)
{
	unsigned int	hashval;
	t_pair			*pair;
	t_pair			*tmp;

	if (!hmap || !key || !*key)
		return ;
	hashval = ft_hashstr(key, HASH_SPACE);
	pair = hmap->pairs[hashval];
	if (ft_strequ(pair->key, key))
	{
		hmap->pairs[hashval] = pair->next;
		free(pair->key);
		free(pair->val);
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
		free(tmp->val);
		free(tmp);
	}
}
