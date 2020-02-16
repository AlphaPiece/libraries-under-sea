/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_hash.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 22:50:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 23:31:19 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_htable.h"

int	ef_htable_hash(t_htable *table, void *key)
{
	int	hashkey;

	if (!table)
		return (0);
	hashkey = (int)table->hsh_key(key);
	if (hashkey < 0)
		hashkey = -hashkey;
	return (hashkey % table->capacity);
}
