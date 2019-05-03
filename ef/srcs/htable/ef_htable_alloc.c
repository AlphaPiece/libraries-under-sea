/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:44:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 14:19:43 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_htable	*ef_htable_alloc(void)
{
	t_htable	*table;

	if (!(table = (t_htable *)malloc(sizeof(t_htable))))
		exit(MALLOC_ERROR);
	return (table);
}
