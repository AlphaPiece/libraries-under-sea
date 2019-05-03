/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:19:47 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 14:33:08 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_htable	*ef_htable_new(void)
{
	t_htable	*table;

	table = ef_htable_alloc();
	table->data = ef_darray_sized_new(sizeof(t_slist *), HTABLE_SIZE);
	table->size = 0;
	return (table);
}
