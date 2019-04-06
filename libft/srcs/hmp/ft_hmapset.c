/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmapset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:04:18 by zwang             #+#    #+#             */
/*   Updated: 2019/04/06 14:39:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhmap.h"

static t_pair	*pairnew(char *key, void *val)
{
	t_pair	*pair;

	if ((pair = (t_pair *)malloc(sizeof(t_pair))))
	{
		pair->next = NULL;
		pair->val = val;
		if (!(pair->key = ft_strdup(key)))
			ft_memfree((void **)&pair);
	}
	return (pair);
}

void			ft_hmapset(t_hmap *hmap, char *key, void *val)
{
	t_pair			*pair;
	t_pair			*head_pair;
	unsigned int	hashval;

	if (!hmap || !key || !*key)
		return ;
	else if ((pair = ft_hmapsearch(hmap, key)))
		pair->val = val;
	else
	{
		if (!(pair = pairnew(key, val)))
			return ;
		hashval = ft_hashstr(key, HASH_SPACE);
		head_pair = hmap->pairs[hashval];
		hmap->pairs[hashval] = pair;
		pair->next = head_pair;
		hmap->count++;
	}
}
