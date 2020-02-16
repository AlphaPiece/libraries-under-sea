/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:46:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:14:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_TREAP_H
# define EF_TREAP_H

# include <limits.h>
# include "ef_deque.h"

/*
** ==============
** >			<
** >>> TREAPS <<<
** >			<
** ==============
*/

typedef struct		s_trnode
{
	void			*key;
	void			*value;
	struct s_trnode *parent;
	struct s_trnode *left;
	struct s_trnode *right;
	int				priority;
}					t_trnode;

typedef struct		s_treap
{
	t_trnode		*root;
	f_cmp			cmp_key;
	f_del			del_key;
	f_del			del_value;
	int				size;
}					t_treap;

// Create
t_trnode			*ef_trnode_alloc(void);
t_trnode			*ef_trnode_create(void *key, void *value);
t_treap				*ef_treap_alloc(void);
t_treap				*ef_treap_create(f_cmp cmp_key, f_del del_key,
										f_del del_value);

// Set
void				ef_treap_insert(t_treap *tree, t_trnode *node);
void				ef_treap_set(t_treap *tree, void *key, void *value);


// Get
t_trnode			*ef_treap_find(t_treap *tree, void *key);
void				*ef_treap_get(t_treap *tree, void *key);

// Remove
void				ef_trnode_free(t_trnode *node, f_del del_key,
									f_del del_value);
void				ef_treap_delete(t_treap *tree, t_trnode *node);
void				ef_treap_remove(t_treap *tree, void *key);
void				ef_treap_clear(t_treap *tree);
void				ef_treap_free(t_treap *tree);

// Traverse
void				ef_treap_traverse(t_treap *tree, f_trw trw);

// Status
int					ef_treap_size(t_treap *tree);

// Extra
void				ef_trnode_left_rotate(t_treap *tree, t_trnode *node);
void				ef_trnode_right_rotate(t_treap *tree, t_trnode *node);

#endif
