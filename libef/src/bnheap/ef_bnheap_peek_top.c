/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_peek_top.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 22:39:33 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 22:40:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bnheap.h"

t_bnnode	*ef_bnheap_peek_top(t_bnheap *heap)
{
	if (heap)
		return (heap->top);
	return (NULL);
}
