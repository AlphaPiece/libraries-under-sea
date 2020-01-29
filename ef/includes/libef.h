/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libef.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:00:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/29 09:36:17 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDS_H
# define LIBDS_H

# include "libft.h"

# define MALLOC_ERROR	1

typedef int			(*f_cmp)(void *, void *);
typedef void		(*f_del)(void *);
typedef void		*(*f_cpy)(void *);
typedef void		*(*f_trv)(void *);
typedef void		*(*f_trw)(void *, void *);

typedef int8_t		t_flag;
typedef uint64_t	t_value;

enum				e_one_or_all
{
	ONE,
	ALL
};

/*
** =======================
** >                     <
** >>> KEY-VALUE PAIRS <<<
** >                     <
** =======================
*/

typedef struct		s_kvpair
{
	void			*key;
	void			*value;
}					t_kvpair;

// Create
t_kvpair			*ef_kvpair_alloc(void);
t_kvpair			*ef_kvpair_create(void *key, void *value);

// Remove
void				ef_kvpair_free(t_kvpair *pair, f_del del_key,
									f_del del_value);

/*
** ======================
** >                    <
** >>> DYNAMIC ARRAYS <<<
** >                    <
** ======================
*/

# define DARRAY_LEN		16

typedef struct		s_darray
{
	void			*data;
	int				length;
	int				capacity;
	size_t			elem_size;
}					t_darray;

// Create
t_darray			*ef_darray_alloc(size_t elem_size, int length);
t_darray			*ef_darray_create(size_t elem_size, int length);
void				ef_darray_resize(t_darray *array);

// Set
void				ef_darray_append(t_darray *array, t_value value);
void				ef_darray_insert(t_darray *array, t_value value, int index);
void				ef_darray_set(t_darray *array, t_value value, int index);

// Get
t_value				ef_darray_get(t_darray *array, int index);
t_value				ef_darray_peek(t_darray *array);

// Remove
t_value				ef_darray_pop(t_darray *array);
t_value				ef_darray_delete(t_darray *array, int index);
void				ef_darray_remove(t_darray *array, t_value value);
void				ef_darray_clear(t_darray *array, f_del del);
void				ef_darray_free(t_darray *array, f_del del);

// Traverse
void				ef_darray_traverse(t_darray *array, f_trv trv);

// Status
int					ef_darray_length(t_darray *array);
size_t				ef_darray_elem_size(t_darray *array);
int					ef_darray_index(t_darray *array, t_value value);

// Extra
void				ef_darray_swap(t_darray *array, int index1, int index2);
void				ef_darray_sort(t_darray *array, f_cmp cmp);
void				ef_darray_reverse(t_darray *array);
t_darray			*ef_darray_copy(t_darray *array, f_cpy cpy);
t_darray			*ef_darray_partition(t_darray *array, int start, int end,
											f_cpy cpy);

/*
** ===========================
** >                         <
** >>> SINGLY LINKED LISTS <<<
** >                         <
** ===========================
*/

typedef struct		s_slist
{
	void			*data;
	struct s_slist	*next;
}					t_slist;

// Create
t_slist				*ef_slist_alloc(void);
t_slist				*ef_slist_create(void *data);

// Set
t_slist				*ef_slist_append(t_slist *list, void *data);
t_slist				*ef_slist_prepend(t_slist *list, void *data);
t_slist				*ef_slist_insert(t_slist *list, void *data, int index);
t_slist				*ef_slist_append_list(t_slist *list1, t_slist *list2);
t_slist				*ef_slist_prepend_list(t_slist *list1, t_slist *list2);
t_slist				*ef_slist_insert_list(t_slist *list1, t_slist *list2,
											int index);
t_slist				*ef_slist_insert_before(t_slist *list, void *data,
											t_slist *node);
t_slist				*ef_slist_insert_after(t_slist *list, void *data,
											t_slist *node);
t_slist				*ef_slist_insert_list_before(t_slist *list1, t_slist *list2,
              			                          t_slist *node);
t_slist				*ef_slist_insert_list_after(t_slist *list1, t_slist *list2,
                    			                t_slist *node);
t_slist				*ef_slist_insert_sorted(t_slist *list, void *data,
											f_cmp cmp);

// Get
t_slist				*ef_slist_find(t_slist *list, void *data, f_cmp cmp);
t_slist				*ef_slist_last_node(t_slist *list);
t_slist				*ef_slist_nth_node(t_slist *list, int n);
void				*ef_slist_nth_data(t_slist *list, int n);

// Remove
t_slist				*ef_slist_unlink(t_slist *list, t_slist *node);
t_slist				*ef_slist_delete(t_slist *list, void *data, f_cmp cmp,
										f_del del, t_flag one_or_all);
void				ef_slist_free(t_slist *list, f_del del, t_flag one_or_all);

// Traverse
void				ef_slist_traverse(t_slist *list, f_trv trv, int length);

// Status
int					ef_slist_length(t_slist *list);
int					ef_slist_node_index(t_slist *list, t_slist *node);
int					ef_slist_data_index(t_slist *list, void *data);

// Extra
t_slist				*ef_slist_sort(t_slist *list, f_cmp cmp);
t_slist				*ef_slist_reverse(t_slist *list);
t_slist				*ef_slist_rotate(t_slist *list, int n);
t_slist				*ef_slist_copy(t_slist *list, f_cpy cpy);

/*
** ===========================
** >                         <
** >>> DOUBLY LINKED LISTS <<<
** >                         <
** ===========================
*/

typedef struct		s_dlist
{
	void			*data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}					t_dlist;

enum				e_list_order
{
	FORWARD,
	BACKWARD
};

// Create
t_dlist				*ef_dlist_alloc(void);
t_dlist				*ef_dlist_create(void *data);

// Set
t_dlist				*ef_dlist_append(t_dlist *list, void *data);
t_dlist				*ef_dlist_prepend(t_dlist *list, void *data);
t_dlist				*ef_dlist_insert(t_dlist *list, void *data, int index);
t_dlist				*ef_dlist_append_list(t_dlist *list1, t_dlist *list2);
t_dlist				*ef_dlist_prepend_list(t_dlist *list1, t_dlist *list2);
t_dlist				*ef_dlist_insert_list(t_dlist *list1, t_dlist *list2,
											int index);
t_dlist				*ef_dlist_insert_before(t_dlist *list, void *data,
											t_dlist *node);
t_dlist				*ef_dlist_insert_after(t_dlist *list, void *data,
											t_dlist *node);
t_dlist				*ef_dlist_insert_list_before(t_dlist *list1, t_dlist *list2,
			                                        t_dlist *node);
t_dlist				*ef_dlist_insert_list_after(t_dlist *list1, t_dlist *list2,
			                                    t_dlist *node);
t_dlist				*ef_dlist_insert_sorted(t_dlist *list, void *data,
											f_cmp cmp);

// Get
t_dlist				*ef_dlist_find(t_dlist *list, void *data, f_cmp cmp,
									t_flag order);
t_dlist				*ef_dlist_first_node(t_dlist *list);
t_dlist				*ef_dlist_last_node(t_dlist *list);
t_dlist				*ef_dlist_nth_node(t_dlist *list, int n);
void				*ef_dlist_nth_data(t_dlist *list, int n);

// Remove
t_dlist				*ef_dlist_unlink(t_dlist *list, t_dlist *node);
t_dlist				*ef_dlist_delete(t_dlist *list, void *data, f_cmp cmp,
										f_del del, t_flag one_or_all);
void				ef_dlist_free(t_dlist *list, f_del del, t_flag one_or_all);

// Traverse
void				ef_dlist_traverse(t_dlist *list, f_trv trv, int length,
										t_flag order);

// Status
int					ef_dlist_length(t_dlist *list);
int					ef_dlist_node_index(t_dlist *list, t_dlist *node);
int					ef_dlist_data_index(t_dlist *list, void *data);

// Extra
t_dlist				*ef_dlist_sort(t_dlist *list, f_cmp cmp);
t_dlist				*ef_dlist_reverse(t_dlist *list);
t_dlist				*ef_dlist_rotate(t_dlist *list, int n);
t_dlist				*ef_dlist_copy(t_dlist *list, f_cpy cpy);

/*
** ===========================
** >                         <
** >>> DOUBLE-ENDED QUEUES <<<
** >                         <
** ===========================
*/

typedef struct		s_deque
{
	t_dlist			*head;
	t_dlist			*tail;
	int				length;
}					t_deque;

// Create
t_deque				*ef_deque_alloc(void);
t_deque				*ef_deque_create(t_dlist *list);

// Set
void				ef_deque_push_head(t_deque *queue, void *data);
void				ef_deque_push_tail(t_deque *queue, void *data);
void				ef_deque_push_nth(t_deque *queue, void *data, int n);

// Get
void				*ef_deque_peek_head(t_deque *queue);
void				*ef_deque_peek_tail(t_deque *queue);
void				*ef_deque_peek_nth(t_deque *queue, int n);

// Remove
void				*ef_deque_pop_head(t_deque *queue);
void				*ef_deque_pop_tail(t_deque *queue);
void				*ef_deque_pop_nth(t_deque *queue, int n);
void				ef_deque_clear(t_deque *queue, f_del del);
void				ef_deque_free(t_deque *queue, f_del del);

// Traverse
void				ef_deque_traverse(t_deque *queue, f_trv trv, int length,
										t_flag order);

// Status
t_bool				ef_deque_is_empty(t_deque *queue);
int					ef_deque_length(t_deque *queue);

// Extra
void				ef_deque_sort(t_deque *queue, f_cmp cmp);
void				ef_deque_reverse(t_deque *queue);
void				ef_deque_rotate(t_deque *queue, int n);
t_deque				*ef_deque_copy(t_deque *queue, f_cpy cpy);

/*
** ===================
** >                 <
** >>> N-ARY TREES <<<
** >                 <
** ===================
*/

typedef struct		s_ntree
{
	void			*data;
	struct s_ntree	*prev;
	struct s_ntree	*next;
	struct s_ntree	*parent;
	struct s_ntree	*children;
}					t_ntree;

enum				e_tree_order
{
	IN_ORDER,
	PRE_ORDER,
	POST_ORDER,
	LEVEL_ORDER
};

enum				e_tree_part
{
	LEAF,
	NON_LEAF,
	WHOLE
};

// Create
t_ntree				*ef_ntree_alloc(void);
t_ntree				*ef_ntree_create(void *data);

// Set
void				ef_ntree_append_child(t_ntree *parent, t_ntree *child);
void				ef_ntree_prepend_child(t_ntree *parent, t_ntree *child);
void				ef_ntree_insert_child(t_ntree *parent, t_ntree *child,
											int index);
void				ef_ntree_insert_child_before(t_ntree *parent,
													t_ntree *child,
													t_ntree *sibling);
void				ef_ntree_insert_child_after(t_ntree *parent,
													t_ntree *child,
													t_ntree *sibling);

// Get
t_ntree				*ef_ntree_root(t_ntree *tree);
t_ntree				*ef_ntree_first_child(t_ntree *parent);
t_ntree				*ef_ntree_last_child(t_ntree *parent);
t_ntree				*ef_ntree_nth_child(t_ntree *parent, int n);
t_ntree				*ef_ntree_first_sibling(t_ntree *tree);
t_ntree				*ef_ntree_last_sibling(t_ntree *tree);
t_ntree				*ef_ntree_prev_sibling(t_ntree *tree);
t_ntree				*ef_ntree_next_sibling(t_ntree *tree);
t_ntree				*ef_ntree_find(t_ntree *tree, void *data, f_cmp cmp,
									int depth, t_flag order, t_flag part);

// Remove
void				ef_ntree_unlink(t_ntree *tree);
t_ntree				*ef_ntree_remove(t_ntree *tree, void *data, f_cmp cmp,
										t_flag order, t_flag one_ar_all);
void				ef_ntree_free(t_ntree *tree, f_del del, t_flag one_or_all);

// Traverse
void				ef_ntree_traverse(t_ntree *tree, f_trv trv, int depth,
										t_flag order, t_flag part);

// Status
t_bool				ef_ntree_is_root(t_ntree *node);
t_bool				ef_ntree_is_leaf(t_ntree *node);
t_bool				ef_ntree_is_ancestor(t_ntree *node, t_ntree *descendant);
t_bool				ef_ntree_is_descendant(t_ntree *node, t_ntree *ancestor);
int					ef_ntree_depth(t_ntree *tree);
int					ef_ntree_height(t_ntree *tree);
int					ef_ntree_count_children(t_ntree *parent);
int					ef_ntree_count_nodes(t_ntree *tree);
int					ef_ntree_count_leaves(t_ntree *tree);
int					ef_ntree_child_index(t_ntree *parent, t_ntree *child);

// Extra
void				ef_ntree_sort_children(t_ntree *parent, f_cmp cmp);
void				ef_ntree_reverse_children(t_ntree *parent);
void				ef_ntree_rotate_children(t_ntree *parent, int n);
t_ntree				*ef_ntree_copy(t_ntree *tree, f_cpy cpy);

/*
** =================
** >               <
** >>> AVL TREES <<<
** >               <
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

/*
** =======================
** >                     <
** >>> RED-BLACK TREES <<<
** >                     <
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
	struct s_rbnode	*parent;
	struct s_rbnode	*left;
	struct s_rbnode	*right;
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

/*
** ===================
** >                 <
** >>> SPLAY TREES <<<
** >                 <
** ===================
*/

typedef struct		s_spnode
{
	void			*key;
	void			*value;
	struct s_spnode	*parent;
	struct s_spnode	*left;
	struct s_spnode	*right;
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

/*
** ==============
** >            <
** >>> TREAPS <<<
** >            <
** ==============
*/

typedef struct		s_trnode
{
	void			*key;
	void			*value;
	struct s_trnode	*parent;
	struct s_trnode	*left;
	struct s_trnode	*right;
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

/*
** ===================
** >                 <
** >>> HASH TABLES <<<
** >                 <
** ===================
*/

# define LOAD_FACTOR	0.7
# define HTABLE_SIZE	32

# define HT_PAIR(x)		((t_kvpair *)(x->data))

typedef int			(*f_hsh)(void *);

typedef struct		s_htable
{
	t_dlist			**array;
	f_hsh			hsh_key;
	f_cmp			cmp_key;
	f_del			del_key;
	f_del			del_value;
	int				size;
	int				capacity;
}					t_htable;

// Create
t_htable			*ef_htable_alloc(int size);
t_htable			*ef_htable_create(f_hsh hsh_key, f_cmp cmp_key,
										f_del del_key, f_del del_value);
void				ef_htable_resize(t_htable *table);

// Set
void				ef_htable_insert(t_htable *table, t_kvpair *pair);
void				ef_htable_set(t_htable *table, void *key, void *value);

// Get
t_dlist				*ef_htable_find(t_htable *table, void *key);
void				*ef_htable_get(t_htable *table, void *key);

// Remove
t_kvpair			*ef_htable_pop(t_htable *table);
void				ef_htable_delete(t_htable *table, t_dlist *node);
void				ef_htable_remove(t_htable *table, void *key);
void				ef_htable_clear(t_htable *table);
void				ef_htable_free(t_htable *table);

// Traverse
void				ef_htable_traverse(t_htable *table, f_trw trw);

// Status
int					ef_htable_size(t_htable *table);

// Extra
int					ef_htable_hash(t_htable *table, void *key);
int					ef_hash_pointer(void *pointer);
int					ef_hash_string(void *string);
int					ef_hash_integer(void *integer);
t_darray			*ef_htable_pairs(t_htable *table);

/*
** ====================
** >                  <
** >>> BINARY HEAPS <<<
** >                  <
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

/*
** ======================
** >                    <
** >>> BINOMIAL HEAPS <<<
** >                    <
** ======================
*/

typedef struct		s_bnnode
{
	void			*key;
	void			*value;
	struct s_bnnode	*parent;
	struct s_bnnode	*sibling;
	struct s_bnnode	*children;
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

/*
** ============================
** >                          <
** >>> DISJOINT-SET FORESTS <<<
** >                          <
** ============================
*/

typedef struct		s_dset
{
	void			*key;
	void			*value;
	struct s_dset	*parent;
	int				rank;
}					t_dset;
	

// Create
t_dset				*ef_dset_alloc(void);
t_dset				*ef_dset_create(void *key, void *value, t_deque *record);

// Union
t_dset				*ef_dset_union(t_dset *set1, t_dset *set2);

// Find
t_dset				*ef_dset_find(t_dset *set);

// Remove
void				ef_dset_free(t_dset *set, f_del del_key, f_del del_value);
void				ef_dset_clear_record(t_deque *record, f_del del_key,
											f_del del_value);

#endif
