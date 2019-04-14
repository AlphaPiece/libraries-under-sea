/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntnodeno.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 19:56:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/13 19:58:44 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

int	ft_bntnodeno(t_btree *root)
{
	if (!root)
		return (0);
	else
		return (1 + ft_bntnodeno(root->left) + ft_bntnodeno(root->right));
}
