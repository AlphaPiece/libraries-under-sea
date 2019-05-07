/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:19:47 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 21:51:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_htable	*ef_htable_new(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_htable	*table;

	if (!cmp_key)
		return (NULL);
	table = ef_htable_alloc();
	table->data = ef_darray_sized_new(sizeof(t_slist *), HTABLE_SIZE);
	table->elem_no = 0;
	table->cmp_key = cmp_key;
	table->del_key = del_key;
	table->del_value = del_value;
	return (table);
}