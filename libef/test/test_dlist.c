/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 14:21:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 08:23:14 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

void	*add_one(void *n)
{
	(*(int *)n)++;
	return (n);
}

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

void	test(void)
{
	t_dlist	*list = NULL, *new_list = NULL;
	t_dlist	*node, *first, *last;
	int		arr[] = {1, 3, 5, 7, 2, 4, 6, 8, 0};
	int		num;
	int		i;
	int		n;

	for (i = 0; i < 3; i++)
		list = ef_dlist_append(list, &arr[i]);
//	print_list(list);
	for (i = 3; i < 6; i++)
		list = ef_dlist_prepend(list, &arr[i]);
//	print_list(list);
	for (i = 6; i < 9; i++)
		list = ef_dlist_insert(list, &arr[i], 6);
//	print_list(list);

/*	list = ef_dlist_insert_before(list, node, &i);
	print_list(list);

	list = ef_dlist_sort(list, cmp_int);
	print_list(list);

	num = 4;
	list = ef_dlist_insert_sorted(list, &num, cmp_int);
	print_list(list);
*/
	
/*	for (i = 2; i < 6; i++)
		list = ef_dlist_prepend(list, &arr[3]);
	print_list(list);

	list = ef_dlist_remove(list, &arr[3]);
	print_list(list);

	list = ef_dlist_remove_all(list, &arr[3]);
	print_list(list);
*/
/*	n = 3;
	list = ef_dlist_append(list, &n);
	print_list(list);
	list = ef_dlist_remove_custom(list, &n, cmp_int);
	print_list(list);

	n = 4;
	num = 4;
	list = ef_dlist_append(list, &n);
	list = ef_dlist_append(list, &num);
	print_list(list);
	list = ef_dlist_remove_all_custom(list, &n, cmp_int);
	print_list(list);
*/
/*	print_list(list);
	first = ef_dlist_first_node(list);
	last = ef_dlist_last_node(list);
	list = ef_dlist_remove_link(list, first);
	list = ef_dlist_remove_link(list, last);
	print_list(list);
*/
//	print_list(list);
//	new_list = ef_dlist_copy(list);
//	print_list(new_list);

	list = ef_dlist_sort(list, cmp_int);
/*	new_list = ef_dlist_copy(list);
	new_list = ef_dlist_reverse(new_list);
	print_list(list);
	print_list(new_list);
*/
/*	ef_dlist_for_each(new_list, add_one);
	print_list(new_list);
*/
//	node = ef_dlist_nth_node(new_list, 0);
//	print_list(node);

//	new_list = ef_dlist_insert_list_before(new_list, list, node);
//	print_list(new_list);

/*	n = ef_dlist_length(new_list);
	ft_printf("%d\n", n);
*/
/*	print_list(list);
	list = ef_dlist_rotate(list, 12);
	print_list(list);
*/
	print_list(list);
	ef_dlist_traverse(list, add_one, 9, FORWARD);
	print_list(list);

	ef_dlist_free(list, NULL, ALL);
}


int		main(void)
{
	test();

//	while (1);
	
	return (0);
}
