/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_hash_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 12:22:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 15:08:48 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_htable.h"

int	ef_hash_integer(void *integer)
{
	if (!integer)
		return (0);
	return ((int)ft_inthash(*(int *)integer));
}
