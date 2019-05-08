/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_htable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1019/05/03 14:27:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 13:44:19 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int		cmp_str(void *s1, void *s2)
{
	return (ft_strcmp((const char *)s1, (const char *)s2));
}

void	*print_str_pair(void *key, void *value)
{
	ft_printf("%s, %s\n", (char *)key, (char *)value);
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

void	print_table(t_htable *table)
{
	ft_printf("===============\n");
	ef_htable_traverse(table, print_str_pair);
	ft_printf("===============\n");
	ft_printf("capacity: %d\n", table->capacity);
}

void	test(void)
{
	t_htable	*table;
	int			arr[] = {23, 19, 90, 11, 3};
	t_dlist		*node;
	t_kvpair	*pair;
	t_darray	*pairs;

	table = ef_htable_new(ef_hash_string, cmp_str, NULL, NULL);

	ef_htable_set(table, "Walker", "1");
	ef_htable_set(table, "Reche", "2");
	ef_htable_set(table, "Asta", "3");
	print_table(table);

	ef_htable_set(table, "Kyoko", "4");
	print_table(table);

	ef_htable_set(table, "Hawk", "5");
	ef_htable_set(table, "Teo", "6");
	ef_htable_set(table, "Lucas", "7");
	print_table(table);

	ef_htable_remove(table, "Walker");
	ef_htable_remove(table, "Hawk");
	print_table(table);

	ef_htable_remove(table, "Teo");
	ef_htable_remove(table, "Kyoko");
	print_table(table);

/*
	node = ef_htable_find(table, "Hawk");
	ft_printf("%s\n", (char *)GET_PAIR(node)->key);

	ft_printf("%s\n", ef_htable_get(table, "Walker"));
	ft_printf("%s\n", ef_htable_get(table, "Kyoko"));
	ft_printf("%s\n", ef_htable_get(table, "Hawk"));

	pair = ef_htable_pop(table);
	print_str_pair(pair->key, pair->value);
	ef_kvpair_free(pair, NULL, NULL);
	pair = ef_htable_pop(table);
	print_str_pair(pair->key, pair->value);
	ef_kvpair_free(pair, NULL, NULL);

	ef_htable_delete(table, ef_htable_find(table, "Walker"));
	ef_htable_delete(table, ef_htable_find(table, "Kyoko"));
	ef_htable_delete(table, ef_htable_find(table, "Kinoko"));

	pairs = ef_htable_pairs(table);
	ft_printf("pairs no: %d\n", pairs->length);
*/
	ef_htable_free(table);
/*
	table = ef_htable_new(ef_hash_pointer, cmp_int, NULL, NULL);
	ef_htable_insert(table, &arr[0], "233");
	ef_htable_insert(table, &arr[1], "199");
	ef_htable_insert(table, &arr[2], "900");
	ef_htable_insert(table, &arr[3], "111");
	ef_htable_insert(table, &arr[4], "33");
	
	ef_htable_traverse(table, print_int_key);
*/
}

int		main(void)
{
	test();

//	while (1);
	
	return (0);
}
