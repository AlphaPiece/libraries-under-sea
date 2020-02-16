/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_slist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:37:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 09:14:23 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"
#include <assert.h>
#include <stdio.h>


int		cmp_int(void *n1, void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return (1);
	else if (*(int *)n1 < *(int *)n2)
		return (-1);
	else
		return (0);
}

void	print_list(t_slist *list)
{
	t_slist	*node;
	
	if (list == NULL)
		printf("null");
	else
		for (node = list; node; node = node->next)
			printf("%d, ", *(int *)node->data);
	printf("\n");
}

void	test(void)
{
	int		arr[] = {7, 6, 5, 4, 3, 2, 1, 0};
	int		n = 10;
	t_slist	*list = NULL;
	t_slist	*new_list;
	int		i;
	t_slist	*node;
	void	*data;

	for (i = 4; i < 7; i++)
		list = ef_slist_append(list, &arr[i]);
//	printf("append\n");

	for (i = 2; i >= 0; i--)
		list = ef_slist_prepend(list, &arr[i]);
//	printf("prepend\n");

	list = ef_slist_insert(list, &arr[3], 3);
//	printf("insert\n");

	

/*	node = ef_slist_nth_node(list, 4);
	if (node)
		printf("%d\n", *(int *)node->data);
	else
		printf("NULL\n");
	printf("nth_node\n");
*/
/*	data = ef_slist_nth_data(list, 3);
	printf("%d\n", *(int *)data);
	printf("nth_data\n");
*/

/*	list = ef_slist_insert_before(list, node, &arr[7]);
//	print_list(list);

	list = ef_slist_sort(list, cmp_int);
//	print_list(list);

	list = ef_slist_insert_sorted(list, &n, cmp_int);
	print_list(list);

	list = ef_slist_remove(list, &arr[3]);
	print_list(list);
*/

/*	list = ef_slist_append(list, &arr[1]);
	list = ef_slist_prepend(list, &arr[1]);
	list = ef_slist_insert(list, &arr[1], 3);
	print_list(list);
	list = ef_slist_remove_all(list, &arr[1]);
	print_list(list);
*/
/*
	print_list(list);
	n = ef_slist_length(list);
	printf("n: %d\n", n);
*/
	print_list(list);
//	new_list = ef_slist_copy(list);
//	print_list(list);
//	print_list(new_list);
//	print_list(list);

//	new_list = ef_slist_reverse(new_list);
//	print_list(new_list);
/*	
	node = ef_slist_last_node(list);
	print_list(node);

	node = ef_slist_find_custom(list, &arr[4], cmp_int);
	print_list(node);
*/

//	list = ef_slist_insert_list(list, new_list, 4);
//	print_list(list);

	list = ef_slist_rotate(list, 0);
	print_list(list);

	ef_slist_free(list, NULL, ALL);
}

int		main(void)
{
	test();

//	while (1);

	return (0);
}
