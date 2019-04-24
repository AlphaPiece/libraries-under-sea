/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 14:21:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 17:34:25 by Zexi Wang        ###   ########.fr       */
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

int	main(void)
{
	t_dlist	*list = NULL;
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

	return (0);
}
