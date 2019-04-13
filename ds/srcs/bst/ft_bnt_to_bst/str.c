/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 11:52:39 by zwang             #+#    #+#             */
/*   Updated: 2018/10/26 14:30:37 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bnt_to_bst.h"

static char	*g_str_arr[MAXNODE];
static int	g_len = 0;

void		push_str_arr(void *data)
{
	if (g_len > MAXNODE)
	{
		ft_printf("error: too many nodes\n");
		return ;
	}
	g_str_arr[g_len++] = (char *)data;
}

void		*pop_str_arr(void *data)
{
	static int	index = 0;

	if (index == g_len)
	{
		ft_printf("error: array is empty\n");
		return (NULL);
	}
	if (!data)
		return (NULL);
	return ((void *)(g_str_arr[index++]));
}

int			cmp_str(int i, int j)
{
	return (ft_strcmp(g_str_arr[i], g_str_arr[j]));
}

void		swap_str(int i, int j)
{
	char	*tmp;

	tmp = g_str_arr[i];
	g_str_arr[i] = g_str_arr[j];
	g_str_arr[j] = tmp;
}
