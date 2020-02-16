/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bheap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:42:57 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:26:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bheap.h"

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

void	print_heap(t_bheap *heap)
{
	ft_printf("======================\n");
	ef_bheap_traverse(heap, print_pair);
	ft_printf("size: %d\n", ef_bheap_size(heap));
	ft_printf("======================\n");
}

void	test(void)
{
	t_bheap		*heap;
	t_kvpair	*pair;
	int			i;

	heap = ef_bheap_create(cmp_str, NULL, NULL);

	ef_bheap_set(heap, "23", "Walker");
	ef_bheap_set(heap, "51", "Asta");
	ef_bheap_set(heap, "89", "Riche");
	ef_bheap_set(heap, "111", "Eve");
	ef_bheap_set(heap, "3", "Tio");
	ef_bheap_set(heap, "90", "Kyedae");

	pair = ef_bheap_peek_top(heap);
	print_pair(pair->key, pair->value);
	print_heap(heap);

	pair = ef_bheap_pop_top(heap);
	ft_printf("poped: ");
	print_pair(pair->key, pair->value);
	print_heap(heap);

	ef_bheap_change_key(heap, ef_bheap_index(heap, "90"), "2");
	print_heap(heap);

	ef_bheap_delete(heap, ef_bheap_index(heap, "51"));
	print_heap(heap);

	ef_bheap_free(heap);
}

int		main(void)
{
	test();

//	while (1);

	return (0);
}
