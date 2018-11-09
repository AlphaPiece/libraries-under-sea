/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:48:16 by zwang             #+#    #+#             */
/*   Updated: 2018/11/08 18:54:44 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bnt_to_bst.h"

static int	g_int_arr[MAXNODE];
static int	g_len = 0;

void		push_int_arr(void *data)
{
	if (g_len > MAXNODE)
	{
		ft_printf("error: too many nodes\n");
		return ;
	}
	g_int_arr[g_len++] = *((int *)data);
}

void		*pop_int_arr(void *data)
{
	static int	index = 0;

	if (index == g_len)
	{
		ft_printf("error: array is empty\n");
		return (NULL);
	}
	if (!data)
		return (NULL);
	return ((void *)(&g_int_arr[index++]));
}

int			cmp_int(int i, int j)
{
	if (g_int_arr[i] > g_int_arr[j])
		return (1);
	else if (g_int_arr[i] < g_int_arr[j])
		return (-1);
	return (0);
}

void		swap_int(int i, int j)
{
	ft_memswap(&g_int_arr[i], &g_int_arr[j], sizeof(g_int_arr[0]));
}
