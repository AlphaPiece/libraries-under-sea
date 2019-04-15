/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btview.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 10:47:03 by zwang             #+#    #+#             */
/*   Updated: 2019/04/13 21:16:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

#define COUNT	10

static void	btview(t_btree *root, int space, void (*print)(void))
{
	if (!root)
		return ;
	space += COUNT;
	btview(root->right, space, print);
	ft_putchar('\n');
	ft_putnchar(' ', space - COUNT);
	print(root->data);
	ft_putchar('\n');
	btview(root->left, space, print);
}

void		ft_btview(t_btree *root, void (*print)(void))
{
	btview(root, 0, print);
}
