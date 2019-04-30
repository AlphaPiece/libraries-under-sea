/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:14:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 20:21:34 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree	*ef_ntree_find(t_ntree *tree, void *data, f_cmp cmp, t_flag order,
						t_flag part)
{
	
