/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 18:28:15 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/06 18:30:48 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_clearchar: clear all char between first char and next '\n'
*/

void	ft_clearchar(void)
{
	while (ft_getchar() != '\n')
		;
}
