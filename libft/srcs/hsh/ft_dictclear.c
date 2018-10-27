/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 11:03:33 by zwang             #+#    #+#             */
/*   Updated: 2018/10/27 14:28:26 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void dictclear(t_dict *dict)
{
	int		i;
	t_pair	*pair;
	t_pair	*tmp;

	i = 0;
	while (true)
	{
		while (i < DICT_SPACE && !dict->set[i])
			i++;
		if (i >= DICT_SPACE)
			break ;
		pair = dict->set[i];
		while (pair->next)
		{
			tmp = pair;
			pair = pair->next;
			free(tmp->key);
			free(tmp);
		}
		free(pair->key);
		free(pair);
		dict->set[i] = NULL;
		i++;
	}
	dict->pair_num = 0;
}

void		ft_dictclear(t_dict *dict)
{
	if (!dict)
		return ;
	dictclear(dict);
}
