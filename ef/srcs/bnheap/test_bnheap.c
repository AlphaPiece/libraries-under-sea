/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bnheap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 20:55:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/18 22:36:56 by Zexi Wang        ###   ########.fr       */
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

void	*print_key(void *key, void *value)
{
	ft_printf("%d, ", *(int *)key);
	return (value);
}

void	view_heap(t_bnnode *head)
{
	t_deque		*queue;
	t_bnnode	*node;
	int			length;

	if (!head)
		return ;
	ft_printf("========================\n");
	queue = ef_deque_create(ef_dlist_create(head));
	while (!ef_deque_is_empty(queue))
	{
		length = ef_deque_length(queue);
		while (length--)
			for (node = ef_deque_pop_head(queue); node; node = node->sibling)
			{
				ft_printf("%d-%d, ", *(int *)node->key, node->degree);
				if (node->child)
					ef_deque_push_tail(queue, node->child);
			}
		ft_printf("\n");
	}
	ft_printf("========================\n");
}

int		main(void)
{
	t_bnheap	*heap;
	t_bnnode	*node;
	int			arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int			i;

	heap = ef_bnheap_create(cmp_int, NULL, NULL);
	for (i = 0; i < 15; i++)
		ef_bnheap_insert(heap, ef_bnnode_create(&arr[i], &arr[i]));
	view_heap(heap->head);

//	heap->top->child = ef_bnnode_reverse(heap->top->child);
//	view_heap(heap);

	node = ef_bnheap_pop_top(heap);
	ft_printf("popped: %d\n", *(int *)node->key);
	view_heap(heap->head);
	node = ef_bnheap_pop_top(heap);
	ft_printf("popped: %d\n", *(int *)node->key);
	view_heap(heap->head);
	node = ef_bnheap_pop_top(heap);
	ft_printf("popped: %d\n", *(int *)node->key);
	view_heap(heap->head);

	return (0);
}
