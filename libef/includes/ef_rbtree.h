/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:42:02 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:49:34 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_RBTREE_H
# define EF_RBTREE_H

# include "ef_deque.h"

/*
** =======================
** >					 <
** >>> RED-BLACK TREES <<<
** >					 <
** =======================
*/

typedef t_flag		t_color;

enum				e_rbnode_color
{
	R,
	B
};

typedef struct		s_rbnode
{
	void			*key;
	void			*value;
	struct s_rbnode *parent;
	struct s_rbnode *left;
	struct s_rbnode *right;
	t_color			color;
}					t_rbnode;

typedef struct		s_rbtree
{
	t_rbnode		*root;
	t_rbnode		*nil;
	f_cmp			cmp_key;
	f_del			del_key;
	f_del			del_value;
	int				size;
}					t_rbtree;

// Create
t_rbnode			*ef_rbnode_alloc(void);
t_rbnode			*ef_rbnode_create(t_rbtree *tree, void *key, void *value);
t_rbtree			*ef_rbtree_alloc(void);
t_rbtree			*ef_rbtree_create(f_cmp cmp_key, f_del del_key,
										f_del del_value);

// Set
void				ef_rbtree_insert(t_rbtree *tree, t_rbnode *node);
void				ef_rbtree_set(t_rbtree *tree, void *key, void *value);

// Get
t_rbnode			*ef_rbtree_root(t_rbtree *tree);
t_rbnode			*ef_rbnode_minimum(t_rbtree *tree, t_rbnode *node);
t_rbnode			*ef_rbnode_maximum(t_rbtree *tree, t_rbnode *node);
t_rbnode			*ef_rbtree_find(t_rbtree *tree, void *key);
void				*ef_rbtree_get(t_rbtree *tree, void *key);

// Remove
void				ef_rbnode_free(t_rbnode *node, f_del del_key,
									f_del del_value);
void				ef_rbtree_delete(t_rbtree *tree, t_rbnode *node);
void				ef_rbtree_remove(t_rbtree *tree, void *key);
void				ef_rbtree_clear(t_rbtree *tree);
void				ef_rbtree_free(t_rbtree *tree);

// Traverse
void				ef_rbtree_traverse(t_rbtree *tree, f_trw trw);

// Status
int					ef_rbtree_size(t_rbtree *tree);
int					ef_rbnode_height(t_rbtree *tree, t_rbnode *node);

// Extra
void				ef_rbnode_left_rotate(t_rbtree *tree, t_rbnode *node);
void				ef_rbnode_right_rotate(t_rbtree *tree, t_rbnode *node);

#endif
