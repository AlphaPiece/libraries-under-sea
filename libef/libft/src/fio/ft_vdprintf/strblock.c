/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strblock.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:46:06 by zwang             #+#    #+#             */
/*   Updated: 2020/02/06 09:44:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vdprintf.h"

t_strblock	*create_strblock(void)
{
	t_strblock	*block;

	if (!(block = (t_strblock *)malloc(sizeof(t_strblock))))
		return (NULL);
	block->str[0] = '\0';
	block->storage = 0;
	block->next = NULL;
	return (block);
}

t_strblock	*find_last_block(t_strblock *strchain)
{
	t_strblock	*block;

	block = strchain;
	while (block->next)
		block = block->next;
	return (block);
}

t_strblock	*append_new_strblock(t_strblock *strchain)
{
	t_strblock	*block;
	t_strblock	*new_block;

	new_block = create_strblock();
	block = find_last_block(strchain);
	block->next = new_block;
	return (new_block);
}

void		str_handler(t_strblock *strchain, const char *next_part,
							char *percent)
{
	t_strblock	*block;
	size_t		len;

	block = find_last_block(strchain);
	if (block->storage + (len = ft_strlen(next_part)) > STR_LEN)
		block = append_new_strblock(strchain);
	if (percent)
	{
		ft_strncpy(&(block->str[block->storage]), next_part,
					percent - next_part);
		block->storage += percent - next_part;
	}
	else
	{
		ft_strcpy(&(block->str[block->storage]), next_part);
		block->storage += len;
	}
}
