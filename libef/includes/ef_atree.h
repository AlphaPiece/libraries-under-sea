/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:39:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:35:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_ATREE_H
# define EF_ATREE_H

# include "libft.h"
# include "ef_define.h"
# include "ef_deque.h"

/*
** =================
** >			   <
** >>> AVL TREES <<<
** >			   <
** =================
*/

typedef struct		s_anode
{
	void			*key;
	void			*value;
	struct s_anode	*parent;
	struct s_anode	*left;
	struct s_anode	*right;
	int				height;
}					t_anode;

typedef struct		s_atree
{
	t_anode			*root;
	f_cmp			cmp_key;
	f_del			del_key;
	f_del			del_value;
	int				size;
}					t_atree;

// Create
t_anode				*ef_anode_alloc(void);
t_anode				*ef_anode_create(void *key, void *value);
t_atree				*ef_atree_alloc(void);
t_atree				*ef_atree_create(f_cmp cmp_key, f_del del_key,
										f_del del_value);

// Set
void				ef_atree_insert(t_atree *tree, t_anode *node);
void				ef_atree_set(t_atree *tree, void *key, void *value);

// Get
t_anode				*ef_atree_root(t_atree *tree);
t_anode				*ef_anode_minimum(t_anode *node);
t_anode				*ef_anode_maximum(t_anode *node);
t_anode				*ef_atree_find(t_atree *tree, void *key);
void				*ef_atree_get(t_atree *tree, void *key);

// Remove
void				ef_anode_free(t_anode *node, f_del del_key,
									f_del del_value);
void				ef_atree_delete(t_atree *tree, t_anode *node);
void				ef_atree_remove(t_atree *tree, void *key);
void				ef_atree_clear(t_atree *tree);
void				ef_atree_free(t_atree *tree);

// Traverse
void				ef_atree_traverse(t_atree *tree, f_trw trw);

// Status
int					ef_atree_size(t_atree *tree);
int					ef_anode_height(t_anode *node);

// Extra
void				ef_anode_left_rotate(t_atree *tree, t_anode *node);
void				ef_anode_right_rotate(t_atree *tree, t_anode *node);

#endif
