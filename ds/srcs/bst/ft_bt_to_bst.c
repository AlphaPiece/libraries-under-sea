/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bt_to_bst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 19:50:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/13 21:11:49 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

int			g_i;

static void	swap_elem(void *arr[], int i, int j)
{
	void	*tmp;

	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

static void	sort_arr(void *arr[], int len, int (*cmp)(void *, void *))
{
	int	gap, i, j;

	for (gap = len / 2; gap > 0; gap /= 2)
		for (i = gap; i < len; i++)
			for (j = i - gap; j >= 0 && cmp(arr[j], arr[j + gap]) > 0; j -= gap)
				swap_elem(arr, j, j + gap);
}

static void	set_arr(t_btree *root, void *arr[])
{
	if (root)
	{
		arr[g_i++] = root->data;
		set_arr(root->left, arr);
		set_arr(root->right, arr);
	}
}

static void	set_tree(t_btree *root, void *arr[])
{
	if (root)
	{
		set_tree(root->left, arr);
		root->data = arr[g_i++];
		set_tree(root->right, arr);
	}
}

t_btree		*ft_bt_to_bst(t_btree *root, int (*cmp)(void *, void *))
{
	int		nodeno;
	void	**arr;

	nodeno = ft_btnodeno(root);
	if (arr = malloc(sizeof(void *) * nodeno))
	{
		set_arr(root, arr);
		sort_arr(arr, nodeno, cmp);
		g_i = 0;
		set_tree(root, arr);
	}
	return (root);
}
