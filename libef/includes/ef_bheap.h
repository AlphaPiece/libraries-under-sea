/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:51:03 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:26:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_BHEAP_H
# define EF_BHEAP_H

# include "ef_kvpair.h" 
# include "ef_darray.h"

/*
** ====================
** >				  <
** >>> BINARY HEAPS <<<
** >				  <
** ====================
*/

# define PARENT(i)			((i + 1) / 2 - 1)
# define LEFT_CHILD(i)		(2 * (i + 1) - 1)
# define RIGHT_CHILD(i)		(2 * (i + 1))

typedef struct		s_bheap
{
	t_darray		*array;
	f_cmp			cmp_key;
	f_del			del_key;
	f_del			del_value;
}					t_bheap;

// Create
t_bheap				*ef_bheap_alloc(void);
t_bheap				*ef_bheap_create(f_cmp cmp_key, f_del del_key,
										f_del del_value);

// Set
void				ef_bheap_insert(t_bheap *heap, t_kvpair *pair);
void				ef_bheap_set(t_bheap *heap, void *key, void *value);
void				ef_bheap_change_key(t_bheap *heap, int index,
										void *new_key);

// Get
t_kvpair			*ef_bheap_peek_top(t_bheap *heap);

// Remove
t_kvpair			*ef_bheap_pop_top(t_bheap *heap);
void				ef_bheap_delete(t_bheap *heap, int index);
void				ef_bheap_clear(t_bheap *heap);
void				ef_bheap_free(t_bheap *heap);

// Traverse
void				ef_bheap_traverse(t_bheap *heap, f_trw trw);

// Status
int					ef_bheap_size(t_bheap *heap);
int					ef_bheap_index(t_bheap *heap, void *key);

// Extra
int					ef_bheap_compare(t_bheap *heap, int index1, int index2);
void				ef_bheap_heapify_up(t_bheap *heap, int index);
void				ef_bheap_heapify_down(t_bheap *heap, int index);

#endif
