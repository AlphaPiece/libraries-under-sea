/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_kvpair_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:07:56 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 22:09:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_kvpair.h"

void	ef_kvpair_free(t_kvpair *pair, f_del del_key, f_del del_value)
{
	if (pair)
	{
		if (del_key)
			del_key(pair->key);
		if (del_value)
			del_value(pair->value);
		free(pair);
	}
}
