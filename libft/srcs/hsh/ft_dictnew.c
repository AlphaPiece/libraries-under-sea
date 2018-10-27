/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:54:59 by zwang             #+#    #+#             */
/*   Updated: 2018/10/27 10:12:17 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dict	*ft_dictnew(void)
{
	t_dict	*dict;

	if (!(dict = (t_dict *)malloc(sizeof(t_dict))))
		return (NULL);
	if (!(dict->set = (t_pair **)ft_memalloc(sizeof(t_pair *) * DICT_SPACE)))
	{
		free(dict);
		return (NULL);
	}
	dict->pair_num = 0;
	return (dict);
}
