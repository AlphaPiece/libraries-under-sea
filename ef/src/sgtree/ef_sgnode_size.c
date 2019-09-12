/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sgnode_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:00:54 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/29 17:11:55 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_sgnode_size(t_sgnode *node)
{
	t_darray	*array;
	int			size;

	if (!node)
		return (0);
	array = ef_darray_create(sizeof(t_sgnode *), 0);
	ef_darray_append(array, (t_value)node);
	size = 0;
	while (ef_darray_length(array))
	{
		node = (t_sgnode *)ef_darray_pop(array);
		size++;
		if (node->right)
			ef_darray_append(array, (t_value)node->right);
		if (node->left)
			ef_darray_append(array, (t_value)node->left);
	}
	ef_darray_free(array, NULL);
	return (size);
}
