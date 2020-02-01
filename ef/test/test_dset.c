/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 09:18:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/01 08:39:45 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*print_data(void *data)
{
	ft_printf("%s ", (char *)data);
	return (data);
}

void	print_set(t_dset *set)
{
	if (set)
		ft_printf("%s->%s, (%s, %d)\n", (char *)set->data, (char *)set->next->data,
					(char *)ef_dset_find(set)->data,
					ef_dset_size(set));
	else
		ft_printf("null\n");
}

void	test(void)
{
	t_dset	*sets[10];
	char	*strs[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};

	for (int i = 0; i < 10; i++)
		sets[i] = ef_dset_create(strs[i]);
/*
	for (int i = 0; i< 10; i++)
		ft_printf("%s ", (char *)ef_dset_find(sets[i])->data);
	ft_printf("\n");
*/
	ef_dset_union(sets[1], sets[2]);		// Connect b c
	print_set(sets[1]);
	print_set(sets[2]);

	ef_dset_union(sets[2], sets[5]);		// Connect c f
	print_set(sets[2]);
	print_set(sets[5]);

	ef_dset_union(sets[0], sets[9]);		// Connect a j
	ef_dset_union(sets[6], sets[8]);		// Connect g i
	ef_dset_union(sets[6], sets[9]);		// Connect g j
	print_set(sets[0]);
	print_set(sets[9]);
	print_set(sets[6]);
	print_set(sets[8]);

	/*

	b - c - f

	a - j
        |
	i - g

	*/

	for (int i = 0; i< 10; i++)
		ft_printf("%s ", (char *)ef_dset_find(sets[i])->data);
	ft_printf("\n");

	ef_dset_traverse(sets[6], print_data);
	ft_printf("\n");

	for (int i = 0; i< 10; i++)
		ft_printf("%s ", (char *)ef_dset_find(sets[i])->data);
	ft_printf("\n");

	ef_dset_free(sets[6], NULL, ALL);
	ef_dset_free(sets[1], NULL, ALL);
	ef_dset_free(sets[3], NULL, ONE);
	ef_dset_free(sets[4], NULL, ONE);
	ef_dset_free(sets[7], NULL, ONE);

}

int		main(void)
{
	test();

//	while (1);

	return (0);
}
