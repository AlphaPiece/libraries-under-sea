/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 10:23:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 11:41:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_htable.h"

void	ef_htable_free(t_htable *table)
{
	if (table)
	{
		ef_htable_clear(table);
		free(table->array);
		free(table);
	}
}
