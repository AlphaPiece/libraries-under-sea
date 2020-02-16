/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:37:12 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:38:23 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_NTREE_H
# define EF_NTREE_H

# include "ef_deque.h"

/*
** ===================
** >                 <
** >>> N-ARY TREES <<<
** >                 <
** ===================
*/

typedef struct      s_ntree
{
    void            *data;
    struct s_ntree  *prev;
    struct s_ntree  *next;
    struct s_ntree  *parent;
    struct s_ntree  *children;
}                   t_ntree;

// Create
t_ntree             *ef_ntree_alloc(void);
t_ntree             *ef_ntree_create(void *data);

// Set
void                ef_ntree_append_child(t_ntree *parent, t_ntree *child);
void                ef_ntree_prepend_child(t_ntree *parent, t_ntree *child);
void                ef_ntree_insert_child(t_ntree *parent, t_ntree *child,
                                            int index);
void                ef_ntree_insert_child_before(t_ntree *parent,
                                                    t_ntree *child,
                                                    t_ntree *sibling);
void                ef_ntree_insert_child_after(t_ntree *parent,
                                                    t_ntree *child,
                                                    t_ntree *sibling);

// Get
t_ntree             *ef_ntree_root(t_ntree *tree);
t_ntree             *ef_ntree_first_child(t_ntree *parent);
t_ntree             *ef_ntree_last_child(t_ntree *parent);
t_ntree             *ef_ntree_nth_child(t_ntree *parent, int n);
t_ntree             *ef_ntree_first_sibling(t_ntree *tree);
t_ntree             *ef_ntree_last_sibling(t_ntree *tree);
t_ntree             *ef_ntree_prev_sibling(t_ntree *tree);
t_ntree             *ef_ntree_next_sibling(t_ntree *tree);
t_ntree             *ef_ntree_find(t_ntree *tree, void *data, f_cmp cmp,
                                    int depth, t_flag order, t_flag part);

// Remove
void                ef_ntree_unlink(t_ntree *tree);
t_ntree             *ef_ntree_remove(t_ntree *tree, void *data, f_cmp cmp,
                                        t_flag order, t_flag one_ar_all);
void                ef_ntree_free(t_ntree *tree, f_del del, t_flag one_or_all);

// Traverse
void                ef_ntree_traverse(t_ntree *tree, f_trv trv, int depth,
                                        t_flag order, t_flag part);

// Status
t_bool              ef_ntree_is_root(t_ntree *node);
t_bool              ef_ntree_is_leaf(t_ntree *node);
t_bool              ef_ntree_is_ancestor(t_ntree *node, t_ntree *descendant);
t_bool              ef_ntree_is_descendant(t_ntree *node, t_ntree *ancestor);
int                 ef_ntree_depth(t_ntree *tree);
int                 ef_ntree_height(t_ntree *tree);
int                 ef_ntree_count_children(t_ntree *parent);
int                 ef_ntree_count_nodes(t_ntree *tree);
int                 ef_ntree_count_leaves(t_ntree *tree);
int                 ef_ntree_child_index(t_ntree *parent, t_ntree *child);

// Extra
void                ef_ntree_sort_children(t_ntree *parent, f_cmp cmp);
void                ef_ntree_reverse_children(t_ntree *parent);
void                ef_ntree_rotate_children(t_ntree *parent, int n);
t_ntree             *ef_ntree_copy(t_ntree *tree, f_cpy cpy);

#endif
