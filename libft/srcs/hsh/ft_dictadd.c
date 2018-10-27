/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:04:18 by zwang             #+#    #+#             */
/*   Updated: 2018/10/27 14:24:18 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dictadd(t_dict *dict, char *key, void *value)
{
	t_pair			*new_pair;
	t_pair			*head_pair;
	unsigned int	hashval;

	if (!dict || !key || !*key)
		return ;
	new_pair = ft_pairnew(key, value);
	hashval = ft_hash_str(key, DICT_SPACE);
	head_pair = dict->set[hashval];
	dict->set[hashval] = new_pair;
	new_pair->next = head_pair;
	dict->pair_num++;
}
