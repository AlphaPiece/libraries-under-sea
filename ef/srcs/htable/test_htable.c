/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_htable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1019/05/03 14:27:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 15:18:01 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int		main(void)
{
	char	*arr[] = {"a", "b", "c", "d", "e", "f", "g", "h"};
/*	char	**arr;

	arr = malloc(sizeof(char *) * 10);
	for (int i = 0; i < 10; i++)
		arr[i] = malloc(sizeof(char) * 10);
*/
	ft_printf("%u\n", ef_htable_hash((void *)arr[0], 10));
	ft_printf("%u\n", ef_htable_hash((void *)arr[1], 10));
	ft_printf("%u\n", ef_htable_hash((void *)arr[2], 10));
	ft_printf("%u\n", ef_htable_hash((void *)arr[3], 10));
	ft_printf("%u\n", ef_htable_hash((void *)arr[4], 10));
	ft_printf("%u\n", ef_htable_hash((void *)arr[5], 10));
	ft_printf("%u\n", ef_htable_hash((void *)arr[6], 10));
	ft_printf("%u\n", ef_htable_hash((void *)arr[7], 10));
	
	return (0);
}
