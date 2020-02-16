/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 10:03:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 23:12:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_htable.h"

void	ef_htable_remove(t_htable *table, void *key)
{
	if (table)
		ef_htable_delete(table, ef_htable_find(table, key));
}
