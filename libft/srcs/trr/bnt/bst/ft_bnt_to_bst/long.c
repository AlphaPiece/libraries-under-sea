/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:48:16 by zwang             #+#    #+#             */
/*   Updated: 2018/10/26 14:32:19 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bnt_to_bst.h"

static long	g_long_arr[MAXNODE];
static int	g_len = 0;

void		push_long_arr(void *data)
{
	if (g_len > MAXNODE)
	{
		ft_printf("error: too many nodes\n");
		return ;
	}
	g_long_arr[g_len++] = *((long *)data);
}

void		*pop_long_arr(void *data)
{
	static int	index = 0;

	if (index == g_len)
	{
		ft_printf("error: array is empty\n");
		return (NULL);
	}
	if (!data)
		return (NULL);
	return ((void *)(&g_long_arr[index++]));
}

int			cmp_long(int i, int j)
{
	if (g_long_arr[i] > g_long_arr[j])
		return (1);
	else if (g_long_arr[i] < g_long_arr[j])
		return (-1);
	return (0);
}

void		swap_long(int i, int j)
{
	ft_swap(sizeof(g_long_arr[0]), &g_long_arr[i], &g_long_arr[j]);
}
