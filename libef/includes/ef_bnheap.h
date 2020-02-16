/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:52:49 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:34:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_BNHEAP_H
# define EF_BNHEAP_H

# include "ef_deque.h"

/*
** ======================
** >					<
** >>> BINOMIAL HEAPS <<<
** >					<
** ======================
*/

typedef struct		s_bnnode
{
	void			*key;
	void			*value;
	struct s_bnnode *parent;
	struct s_bnnode *sibling;
	struct s_bnnode *children;
	int				degree;
}					t_bnnode;

typedef struct		s_bnheap
{
	t_bnnode		*head;
	t_bnnode		*top;
	f_cmp			cmp_key;
	f_del			del_key;
	f_del			del_value;
}					t_bnheap;

// Create
t_bnnode			*ef_bnnode_alloc(void);
t_bnnode			*ef_bnnode_create(void *key, void *value);
t_bnheap			*ef_bnheap_alloc(void);
t_bnheap			*ef_bnheap_create(f_cmp cmp_key, f_del del_key,
										f_del del_value);

// Set
void				ef_bnheap_insert(t_bnheap *heap, t_bnnode *node);
void				ef_bnheap_set(t_bnheap *heap, void *key, void *value);
void				ef_bnheap_change_key(t_bnheap *heap, t_bnnode *node,
											void *new_key);

// Get
t_bnnode			*ef_bnheap_peek_top(t_bnheap *heap);
t_bnnode			*ef_bnheap_find(t_bnheap *heap, void *key);

// Remove
void				ef_bnnode_free(t_bnnode *node, f_del del_key,
									f_del del_value);
t_bnnode			*ef_bnheap_pop_top(t_bnheap *heap);
void				ef_bnheap_delete(t_bnheap *heap, t_bnnode *node);
void				ef_bnheap_clear(t_bnheap *heap);
void				ef_bnheap_free(t_bnheap *heap);

// Traverse
void				ef_bnheap_traverse(t_bnheap *heap, f_trw trw);

// Status
int					ef_bnnode_size(t_bnnode *node);
int					ef_bnheap_size(t_bnheap *heap);

// Extra
t_bnnode			*ef_bnnode_merge(t_bnnode *node1, t_bnnode *node2,
										f_cmp cmp_key);
t_bnheap			*ef_bnheap_merge(t_bnheap *heap1, t_bnheap *heap2);
t_bnnode			*ef_bnnode_reverse(t_bnnode *node);

#endif
