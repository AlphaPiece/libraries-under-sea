/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sklist_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 12:14:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 12:15:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sklist	*ef_sklist_alloc(void)
{
	t_sklist	*list;

	if (!(list = (t_sklist *)malloc(sizeof(t_sklist))))
		exit(MALLOC_ERROR);
	return (list);
}
