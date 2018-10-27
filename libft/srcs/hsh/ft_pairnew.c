/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pairnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:10:36 by zwang             #+#    #+#             */
/*   Updated: 2018/10/27 11:41:48 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pair	*ft_pairnew(char *key, void *value)
{
	t_pair	*pair;

	if ((pair = (t_pair *)malloc(sizeof(t_pair))))
	{
		pair->key = ft_strdup(key);
		pair->value = value;
	}
	return (pair);
}
