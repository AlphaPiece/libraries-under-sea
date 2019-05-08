/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:19:47 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 22:33:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_htable	*ef_htable_new(f_hsh hsh_key, f_cmp cmp_key, f_del del_key,
							f_del del_value)
{
	t_htable	*table;

	if (!hsh_key || !cmp_key)
		return (NULL);
	table = ef_htable_alloc();
	table->size = 0;
	table->capacity = HTABLE_SIZE;
	table->hsh_key = hsh_key;
	table->cmp_key = cmp_key;
	table->del_key = del_key;
	table->del_value = del_value;
	return (table);
}
