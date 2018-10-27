/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictremove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 09:58:17 by zwang             #+#    #+#             */
/*   Updated: 2018/10/27 14:23:41 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dictremove(t_dict *dict, char *key)
{
	unsigned int	hashval;
	t_pair			*pair;
	t_pair			*tmp;

	if (!dict || !key || !*key)
		return ;
	hashval = ft_hash_str(key, DICT_SPACE);
	pair = dict->set[hashval];
	if (ft_strequ(pair->key, key))
	{
		dict->set[hashval] = pair->next;
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
