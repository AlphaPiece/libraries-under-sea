/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_kvpair_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:06:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 11:01:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_kvpair.h"

t_kvpair	*ef_kvpair_create(void *key, void *value)
{
	t_kvpair	*pair;

	pair = ef_kvpair_alloc();
	pair->key = key;
	pair->value = value;
	return (pair);
}
