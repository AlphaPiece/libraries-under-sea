/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_deque.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 09:53:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 13:19:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"
#include <assert.h>

int		cmp_int(void *n1, void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return (1);
	else if (*(int *)n1 < *(int *)n2)
		return (-1);
	else
		return (0);
}

void	print_list(t_dlist *list)
{
	t_dlist *node;

	if (!list)
		ft_printf("null");
	else
	{
		ft_printf("f: ");
		for (node = list; node; node = node->next)
			ft_printf("%d, ", *(int *)node->data);
		ft_printf("\nb: ");
		list = ef_dlist_last_node(list);
		for (node = list; node; node = node->prev)
			ft_printf("%d, ", *(int *)node->data);
	}
	ft_printf("\n");
}

void	print_queue(t_deque *queue)
{
	if (!queue)
		ft_printf("NULL\n");
	else
	{
		print_list(queue->head);
		ft_printf("len: %d\n", queue->length);
	}
}

void	test(void)
{
	t_deque	*queue;
	t_deque	*new_queue;
	t_deque	*empty_queue;
	int		arr[] = {0,1,2,3,4,5,6};
	void	*var;

	queue = ef_deque_new(NULL);
	assert(queue->head == NULL);
	assert(queue->tail == NULL);
	assert(queue->length == 0);

	assert(ef_deque_is_empty(queue) == true);
	assert(ef_deque_length(queue) == 0);

	ef_deque_push_head(queue, &arr[0]);
	ef_deque_push_head(queue, &arr[1]);
//	print_queue(queue);

	ef_deque_push_tail(queue, &arr[2]);
	ef_deque_push_tail(queue, &arr[3]);
//	print_queue(queue);

	ef_deque_push_nth(queue, &arr[4], 0);
//	print_queue(queue);
	ef_deque_push_nth(queue, &arr[5], 4);
//	print_queue(queue);

	empty_queue = ef_deque_new(NULL);

/*	var = ef_deque_pop_head(empty_queue);
	print_queue(empty_queue);
	if (var)
		ft_printf("%d\n", *(int *)var);
*/
/*	var = ef_deque_pop_tail(empty_queue);
	print_queue(empty_queue);
	if (var)
		ft_printf("%d\n", *(int *)var);
*/
/*	var = ef_deque_pop_nth(empty_queue, 3);
	print_queue(empty_queue);
	if (var)
		ft_printf("%d\n", *(int *)var);
*/
/*	var = ef_deque_peek_head(empty_queue);
	print_queue(queue);
	if (var)
		ft_printf("%d\n", *(int *)var);
*/
/*	var = ef_deque_peek_tail(queue);
	print_queue(queue);
	if (var)
		ft_printf("%d\n", *(int *)var);
*/
/*	var = ef_deque_peek_nth(queue, -1);
	print_queue(queue);
	if (var)
		ft_printf("%d\n", *(int *)var);
*/
	ef_deque_sort(queue, cmp_int);
	print_queue(queue);
	
//	ef_deque_reverse(NULL);
//	print_queue(queue);

	ef_deque_rotate(queue, 10);
	print_queue(queue);

/*	new_queue = ef_deque_copy(queue);
	print_queue(new_queue);
	ft_printf("%p, %p\n", queue, new_queue);
*/
/*	ef_deque_clear_queue(queue);
	print_queue(queue);
*/
	ef_deque_free_queue(empty_queue);
	ef_deque_free_queue(queue);
}

int		main(void)
{
	test();
	
	while (1);

	return (0);
}
