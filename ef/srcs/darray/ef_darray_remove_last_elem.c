/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_remove_last_elem.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:44:56 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 18:53:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_remove_last_elem(t_darray *darr)
{
	if (ef_darray_length(darr) > 0)
		--((t_rdarray *)darr)->elem_no;
	return (darr);
}
