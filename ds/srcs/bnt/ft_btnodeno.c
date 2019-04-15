/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btnodeno.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 19:56:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/13 21:12:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

int	ft_btnodeno(t_btree *root)
{
	if (!root)
		return (0);
	else
		return (1 + ft_btnodeno(root->left) + ft_btnodeno(root->right));
}
