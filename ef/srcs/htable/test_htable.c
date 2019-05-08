/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_htable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1019/05/03 14:27:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 23:44:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int		cmp_str(void *s1, void *s2)
{
	return (ft_strcmp((const char *)s1, (const char *)s2));
}

void	*print_str_key(void *key, void *value)
{
	ft_printf("%s\n", (char *)key);
	return (value);
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

void	*print_int_key(void *key, void *value)
{
	ft_printf("%d\n", *(int *)key);
	return (value);
}

int		main(void)
{
	t_htable	*table;
	int			arr[] = {23, 19, 90, 11, 3};
	t_dlist		*node;

	table = ef_htable_new(ef_hash_string, cmp_str, NULL, NULL);
	ef_htable_insert(table, "Walker", "1");
	ef_htable_insert(table, "Reche", "2");
	ef_htable_insert(table, "Asta", "3");
	ef_htable_insert(table, "Kyoko", "4");
	ef_htable_insert(table, "Hawk", "5");

//	ef_htable_traverse(table, print_str_key);

	node = ef_htable_find(table, "Hawk");
	ft_printf("%s\n", (char *)GET_PAIR(node)->key);

	ft_printf("%s\n", ef_htable_get(table, "Walker"));
	ft_printf("%s\n", ef_htable_get(table, "Kyoko"));
	ft_printf("%s\n", ef_htable_get(table, "Hawk"));

/*
	table = ef_htable_new(ef_hash_pointer, cmp_int, NULL, NULL);
	ef_htable_insert(table, &arr[0], "233");
	ef_htable_insert(table, &arr[1], "199");
	ef_htable_insert(table, &arr[2], "900");
	ef_htable_insert(table, &arr[3], "111");
	ef_htable_insert(table, &arr[4], "33");
	
	ef_htable_traverse(table, print_int_key);
*/	
	
	return (0);
}
