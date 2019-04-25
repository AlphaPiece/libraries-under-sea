/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_darray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 13:34:17 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 19:35:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	print_array(t_darray *darr)
{
	int	len;
	int	i;

	len = ef_darray_length(darr);
	for (i = 0; i < len; i++)
		ft_printf("%d, ", ef_darray_index(darr, int, i));
	ft_printf("\n");
}

int	main()
{
	t_rdarray	*rdarr;
	t_darray	*darr;
	int			i;
	int			arr[5] = {0,1,2,3,4};
	int			brr[7] = {11,12,13,14,15,16,17};
	void		*ptr;

	darr = ef_darray_sized_new(sizeof(int), sizeof(int) * 50);
	rdarr = (t_rdarray *)darr;

/*	ptr = (void *)arr;
	ef_darray_insert_array(darr, 0, ptr, 5);
	ef_darray_insert_array(darr, 0, ptr, 5);

	ptr = (void *)brr;
	ef_darray_prepend_array(darr, ptr, 6);
	
	ef_darray_append_array(darr, ptr, 7);
*/
	for (i = 0; i < 10; i++)
		ef_darray_append(darr, i);
	print_array(darr);
/*
	ef_darray_remove(darr, 3);
	print_array(darr);
	ef_darray_remove(darr, 0);
	print_array(darr);
	ef_darray_remove(darr, 12);
	print_array(darr);

	ef_darray_remove_last_elem(darr);
	print_array(darr);

	ef_darray_remove_range(darr, 3, 2);
	print_array(darr);
	ef_darray_remove_range(darr, 0, 2);
	print_array(darr);
	ef_darray_remove_range(darr, 4, 2);
	print_array(darr);
	ef_darray_remove_range(darr, 3, 3);
	print_array(darr);
	ef_darray_remove_range(darr, -1, 4);
	print_array(darr);
	ef_darray_remove_range(darr, 7, -5);
	print_array(darr);
*/
	

	return (0);
}
