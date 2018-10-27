/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 10:04:39 by zwang             #+#    #+#             */
/*   Updated: 2018/10/27 14:06:02 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_dictget(t_dict *dict, char *key)
{
	t_pair			*pair;

	if (!dict || !key || !*key)
		return (NULL);
	pair = dict->set[ft_hash_str(key, DICT_SPACE)];
	while (pair && !ft_strequ(pair->key, key))
		pair = pair->next;
	if (pair)
		return (pair->value);
	return (NULL);
}
