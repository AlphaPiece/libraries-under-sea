/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 09:18:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/29 11:12:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	test(void)
{
	t_dset	*sets[10];
	char	*strs[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
	t_deque	*record;

	record = ef_deque_create(NULL);
	for (int i = 0; i < 10; i++)
		sets[i] = ef_dset_create(strs[i], NULL, record);

	for (int i = 0; i< 10; i++)
		ft_printf("%s ", (char *)ef_dset_find(sets[i])->key);
	ft_printf("\n");

	ef_dset_union(sets[1], sets[2]);		// Connect b c
	ef_dset_union(sets[2], sets[5]);		// Connect c f
	ef_dset_union(sets[0], sets[9]);		// Connect a j
	ef_dset_union(sets[6], sets[8]);		// Connect g i
	ef_dset_union(sets[6], sets[9]);		// Connect g j

	/*

	b - c - f

	a - j
        |
	i - g

	*/

	for (int i = 0; i< 10; i++)
		ft_printf("%s ", (char *)ef_dset_find(sets[i])->key);
	ft_printf("\n");

	ef_dset_clear_record(record, NULL, NULL);
	ef_deque_free(record, NULL);
}

int		main(void)
{
	test();

//	while (1);

	return (0);
}
