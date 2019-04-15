/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_slist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:37:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/15 17:43:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"
#include <assert.h>
#include <stdio.h>

int	main(void)
{
	int		arr[] = {0, 1, 2, 3, 4, 5, 6};
	t_slist	*list = NULL;
	int		i;
	t_slist	*node;

	for (i = 4; i < 7; i++)
		slist_append(list, &arr[i]);
	for (i = 0; i < 3; i++)
		slist_prepend(list, &arr[i]);
	slist_insert(list, &arr[3], 3);
	for (node = list; node; node = node->next)
		printf("%d, ", *(int *)node->data);
	printf("\n");
	return (0);
}
