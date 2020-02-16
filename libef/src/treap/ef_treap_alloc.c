/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:43:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:11:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

t_treap	*ef_treap_alloc(void)
{
	t_treap	*tree;

	if (!(tree = (t_treap *)malloc(sizeof(t_treap))))
	{
		perror("malloc");
		exit(1);
	}
	return (tree);
}
