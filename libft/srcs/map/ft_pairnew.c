/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pairnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:10:36 by zwang             #+#    #+#             */
/*   Updated: 2019/02/17 12:58:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pair	*ft_pairnew(char *key, void *val)
{
	t_pair	*pair;

	if ((pair = (t_pair *)malloc(sizeof(t_pair))))
	{
		pair->key = ft_strdup(key);
		pair->val = val;
	}
	return (pair);
}
