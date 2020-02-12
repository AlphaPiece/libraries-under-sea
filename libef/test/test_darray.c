/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_darray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 13:34:17 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 10:08:41 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int		cmp_int(void *n1, void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return (1);
	else if (*(int *)n1 < *(int *)n2)
		return (-1);
	else
		return (0);
}

void	print_array(t_darray *array)
{
	int	len;
	int	i;

	if (!array)
	{
		ft_printf("null\n");
		return ;
	}
	len = ef_darray_length(array);
	for (i = 0; i < len; i++)
		ft_printf("%d, ", ef_darray_get(array, i));
	ft_printf("\n");
}

void	*add_one(void *value)
{
	return ((void *)((t_value)value + 1));
}

void	*print_str(void *value)
{
	ft_printf("%s, ", (char *)value);
	return (value);
}

void	delete_str(void *str)
{
	free(str);
}

void	test(void)
{
	t_darray	*array;
	t_value		value;
	int			i;
	int			arr[5] = {0,1,2,3,4};
	int			brr[7] = {11,12,13,14,15,16,17};
	char		**strarr;
	char		*s = "Walker has a good day.";
	void		*ptr;
	t_darray	*partition;

	array = ef_darray_sized_new(sizeof(char *), 10);

	strarr = ft_strsplit(s, " ");
	for (i = 0; strarr[i]; i++)
		ef_darray_insert(array, (t_value)strarr[i], 0);
	ef_darray_traverse(array, print_str);
	ft_printf("\n");

	ef_darray_free(array, delete_str);
	free(strarr);


/*	for (i = 0; i < 9; i++)
		ef_darray_insert(array, i, 0);
	print_array(array);

	ef_darray_insert(array, brr[0], 0);
	print_array(array);
	ef_darray_insert(array, brr[1], 1);
	print_array(array);
	ef_darray_insert(array, brr[2], 5);
	print_array(array);

	ef_darray_set(array, brr[0], 1);
	print_array(array);
	ef_darray_set(array, brr[1], 5);
	print_array(array);

	value = ef_darray_delete(array, 3);
	ft_printf("%d\n", value);
	print_array(array);

	value = ef_darray_delete(array, 0);
	ft_printf("%d\n", value);
	print_array(array);

	value = ef_darray_delete(array, array->length - 1);
	ft_printf("%d\n", value);
	print_array(array);

	while (array->length >= -1)
	{
		value = ef_darray_pop(array);
		ft_printf("%d\n", value);
		print_array(array);
	}

	ef_darray_remove(array, 7);
	print_array(array);
	ef_darray_remove(array, 2);
	print_array(array);

	ef_darray_sort(array, cmp_int);
	print_array(array);

	ef_darray_reverse(array);
	print_array(array);

	partition = ef_darray_partition(array, 3, 6, NULL);
	print_array(partition);
	ef_darray_free(partition, NULL);
	partition = ef_darray_partition(array, -1, 6, NULL);
	print_array(partition);
	ef_darray_free(partition, NULL);
	partition = ef_darray_partition(array, 3, 20, NULL);
	print_array(partition);
	ef_darray_free(partition, NULL);
	partition = ef_darray_partition(array, 4, 4, NULL);
	print_array(partition);
	ef_darray_free(partition, NULL);
	partition = ef_darray_partition(array, 0, ef_darray_length(array), NULL);
	print_array(partition);
	ef_darray_free(partition, NULL);

	ef_darray_traverse(array, add_one);
	print_array(array);

	ef_darray_free(array, NULL);
*/
}

int		main()
{
	test();

	while (1);

	return (0);
}
