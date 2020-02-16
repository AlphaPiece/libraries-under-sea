/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:44:42 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:06:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_SPTREE_H
# define EF_SPTREE_H

# include "ef_deque.h"

/*
** ===================
** >				 <
** >>> SPLAY TREES <<<
** >				 <
** ===================
*/

typedef struct		s_spnode
{
	void			*key;
	void			*value;
	struct s_spnode *parent;
	struct s_spnode *left;
	struct s_spnode *right;
}					t_spnode;

typedef struct		s_sptree
{
	t_spnode		*root;
	f_cmp			cmp_key;
	f_del			del_key;
	f_del			del_value;
}					t_sptree;

// Create
t_spnode			*ef_spnode_alloc(void);
t_spnode			*ef_spnode_create(void *key, void *value);
t_sptree			*ef_sptree_alloc(void);
t_sptree			*ef_sptree_create(f_cmp cmp_key, f_del del_key,
										f_del del_value);

// Set
void				ef_sptree_insert(t_sptree *tree, t_spnode *node);
void				ef_sptree_set(t_sptree *tree, void *key, void *value);

// Get
t_spnode			*ef_spnode_minimum(t_spnode *node);
t_spnode			*ef_spnode_maximum(t_spnode *node);
t_spnode			*ef_sptree_find(t_sptree *tree, void *key);
void				*ef_sptree_get(t_sptree *tree, void *key);

// Remove
void				ef_spnode_free(t_spnode *node, f_del del_key,
									f_del del_value);
void				ef_sptree_delete(t_sptree *tree, t_spnode *node);
void				ef_sptree_remove(t_sptree *tree, void *key);
void				ef_sptree_clear(t_sptree *tree);
void				ef_sptree_free(t_sptree *tree);

// Traverse
void				ef_sptree_traverse(t_sptree *tree, f_trw trw);

// Status
int					ef_sptree_size(t_sptree *tree);

// Extra
void				ef_spnode_left_rotate(t_sptree *tree, t_spnode *node);
void				ef_spnode_right_rotate(t_sptree *tree, t_spnode *node);
void				ef_sptree_splay(t_sptree *tree, t_spnode *node);
t_sptree			*ef_sptree_join(t_sptree *tree1, t_sptree *tree2);
t_sptree			*ef_sptree_split(t_sptree *tree, void *key);

#endif
