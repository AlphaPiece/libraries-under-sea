/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bheap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:42:57 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 22:47:40 by Zexi Wang        ###   ########.fr       */
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

int		cmp_str(void *s1, void *s2)
{
        return (ft_strcmp((const char *)s1, (const char *)s2));
}

void	*print_pair(void *key, void *value)
{
	ft_printf("%s: %s\n", key, value);
	return (value);
}

int		main(void)
{
	t_bheap		*heap;
	t_kvpair	*pair;

	heap = ef_bheap_new(cmp_str, MIN_HEAP);

	ef_bheap_insert(heap, ef_kvpair_new("23", "Walker"));
	ef_bheap_insert(heap, ef_kvpair_new("51", "Asta"));
	ef_bheap_insert(heap, ef_kvpair_new("89", "Reche"));
	ef_bheap_insert(heap, ef_kvpair_new("111", "Eve"));
	ef_bheap_insert(heap, ef_kvpair_new("3", "Tio"));
	ef_bheap_insert(heap, ef_kvpair_new("90", "Kyedae"));

/*	pair = ef_bheap_peek_top(heap);
	print_pair(pair->key, pair->value);
*/
//	ef_bheap_traverse(heap, print_pair);

	pair = ef_bheap_pop_top(heap);
	ft_printf("poped: ");
	print_pair(pair->key, pair->value);
	ef_bheap_traverse(heap, print_pair);
	ft_printf("=================\n");

	ef_bheap_change_key(heap, 3, "1");
	ef_bheap_traverse(heap, print_pair);

	return (0);
}
