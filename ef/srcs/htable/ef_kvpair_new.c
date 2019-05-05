/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_kvpair_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:06:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 22:07:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_kvpair	*ef_kvpair_new(void *key, void *value)
{
	t_kvpair	*pair;

	pair = ef_kvpair_alloc();
	pair->key = key;
	pair->value = value;
	return (pair);
}
