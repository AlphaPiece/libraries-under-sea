/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmapsearch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:32:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/12 11:18:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

t_pair	*ft_hmapsearch(t_hmap *hmap, char *key)
{
	t_pair	*pair;

	if (!hmap || !key || !*key)
		return (NULL);
	pair = hmap->pairs[ft_hashstr(key, HASH_SPACE)];
	while (pair && !ft_strequ(pair->key, key))
		pair = pair->next;
	return (pair);
}
