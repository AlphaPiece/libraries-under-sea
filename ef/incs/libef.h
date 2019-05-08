/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libef.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:00:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 13:47:38 by Zexi Wang        ###   ########.fr       */
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
typedef int			(*f_hsh)(void *);

typedef int8_t		t_flag;
typedef uint64_t	t_value;

enum				e_one_or_all
{
	ONE,
	ALL
};

/*
** ======================
** >                    <
** >>> DYNAMIC ARRARY <<<
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
t_darray			*ef_darray_new(size_t elem_size);
t_darray			*ef_darray_sized_new(size_t elem_size, int length);
void				ef_darray_expand_capacity(t_darray *array);

// Set
void				ef_darray_append(t_darray *array, t_value value);
void				ef_darray_insert(t_darray *array, t_value value, int index);
void				ef_darray_set(t_darray *array, t_value value, int index);

// Get
t_value				ef_darray_get(t_darray *array, int index);

// Delete
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
int					ef_darray_elem_index(t_darray *array, t_value value);

// Extra
void				ef_darray_swap(t_darray *array, int index1, int index2);
void				ef_darray_sort(t_darray *array, f_cmp cmp);
void				ef_darray_reverse(t_darray *array);
t_darray			*ef_darray_copy(t_darray *array, f_cpy cpy);
t_darray			*ef_darray_partition(t_darray *array, int start, int end,
											f_cpy cpy);

/*
** ===================
** >                 <
** >>> BINARY HEAP <<<
** >                 <
** ===================
*/

typedef struct		s_bheap
{
	t_darray		*array;
	f_cmp			cmp;
}					t_bheap;

// Create
t_bheap				*ef_bheap_alloc(void);
t_bheap				*ef_bheap_new(size_t elem_size, f_cmp cmp);

// Set
void				ef_bheap_insert(t_bheap *heap, void *data);

// Get
int					ef_bheap_index(t_bheap *heap, void *data);
void				*ef_bheap_parent(t_bheap *heap, void *data);
void				*ef_bheap_left_child(t_bheap *heap, void *data);
void				*ef_bheap_right_child(t_bheap *heap, void *data);
void				*ef_bheap_peek_top(t_bheap *heap);
void				*ef_bheap_pop_top(t_bheap *heap);

// Delete


// Status


// Extra


/*
** ==========================
** >                        <
** >>> SINGLY LINKED LIST <<<
** >                        <
** ==========================
*/

typedef struct		s_slist
{
	void			*data;
	struct s_slist	*next;
}					t_slist;

// Create
t_slist				*ef_slist_alloc(void);
t_slist				*ef_slist_new(void *data);

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

// Delete
t_slist				*ef_slist_unlink(t_slist *list, t_slist *node);
t_slist				*ef_slist_remove(t_slist *list, void *data, f_cmp cmp,
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
** ==========================
** >                        <
** >>> DOUBLY LINKED LIST <<<
** >                        <
** ==========================
*/

typedef struct		s_dlist
{
	void			*data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}					t_dlist;

enum				e_dlist_order
{
	FORWARD,
	BACKWARD
};

// Create
t_dlist				*ef_dlist_alloc(void);
t_dlist				*ef_dlist_new(void *data);

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

// Delete
t_dlist				*ef_dlist_unlink(t_dlist *list, t_dlist *node);
t_dlist				*ef_dlist_remove(t_dlist *list, void *data, f_cmp cmp,
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
** =================
** >               <
** >>> SKIP LIST <<<
** >               <
** =================
*/



/*
** ==========================
** >                        <
** >>> DOUBLE-ENDED QUEUE <<<
** >                        <
** ==========================
*/

typedef struct		s_deque
{
	t_dlist			*head;
	t_dlist			*tail;
	int				length;
}					t_deque;

// Create
t_deque				*ef_deque_alloc(void);
t_deque				*ef_deque_new(t_dlist *list);

// Set
void				ef_deque_push_head(t_deque *queue, void *data);
void				ef_deque_push_tail(t_deque *queue, void *data);
void				ef_deque_push_nth(t_deque *queue, void *data, int n);

// Get
void				*ef_deque_peek_head(t_deque *queue);
void				*ef_deque_peek_tail(t_deque *queue);
void				*ef_deque_peek_nth(t_deque *queue, int n);

// Delete
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
** ==================
** >                <
** >>> N-ARY TREE <<<
** >                <
** ==================
*/

typedef struct		s_ntree
{
	void			*data;
	struct s_ntree	*prev;
	struct s_ntree	*next;
	struct s_ntree	*parent;
	struct s_ntree	*children;
}					t_ntree;

enum				e_ntree_order
{
	IN_ORDER,
	PRE_ORDER,
	POST_ORDER,
	LEVEL_ORDER
};

enum				e_ntree_part
{
	LEAF,
	NON_LEAF,
	WHOLE
};

// Create
t_ntree				*ef_ntree_alloc(void);
t_ntree				*ef_ntree_new(void *data);

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

// Delete
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
** =========================================
** >                                       <
** >>> SELF-BALANCING BINARY SEARCH TREE <<<
** >                                       <
** =========================================
*/

typedef t_flag		t_color;

enum				e_rbtree_color
{
	R,
	B
};

typedef struct		s_rbtree
{
	void			*key;
	void			*value;
	struct s_rbtree	*parent;
	struct s_rbtree	*left;
	struct s_rbtree	*right;
	t_color			color;
}					t_rbtree;

typedef struct		s_bstree
{
	t_rbtree		*root;
	int				size;
	f_cmp			cmp_key;
	f_del			del_key;
	f_del			del_value;
	f_cpy			cpy_key;
	f_cpy			cpy_value;
}					t_bstree;

// Create
t_rbtree			*ef_rbtree_alloc(void);
t_rbtree			*ef_rbtree_new(void *key, void *value);
t_bstree			*ef_bstree_alloc(void);
t_bstree			*ef_bstree_new(f_cmp cmp_key, f_cpy cpy_key,
									f_cpy cpy_value, f_del del_key,
									f_del del_value);

// Set
void				ef_bstree_insert(t_bstree *tree, void *key, void *value);
t_bstree			*ef_bstree_set(t_bstree *tree, void *key, void *value);

// Get
t_rbtree			*ef_rbtree_minimum(t_rbtree *tree, f_cmp cmp_key);
t_rbtree			*ef_rbtree_maximum(t_rbtree *tree, f_cmp cmp_key);
t_rbtree			*ef_bstree_find(t_bstree *tree, void *key);
void				*ef_bstree_get(t_bstree *tree, void *key);

// Delete
void				ef_rbtree_free(t_rbtree *tree, f_del del_key,
									f_del del_value, t_flag one_or_all);
void				ef_bstree_delete(t_bstree *tree, void *key);
void				ef_bstree_free(t_bstree *tree);

// Traverse
void				ef_bstree_traverse(t_bstree *tree, f_trw trw, t_flag order);

// Status
int					ef_bstree_height(t_bstree *tree);
int					ef_bstree_count_nodes(t_bstree *tree);
int					ef_bstree_count_leaves(t_bstree *tree);

// Extra
void				ef_bstree_left_rotate(t_bstree *tree, t_rbtree *x);
void				ef_bstree_right_rotate(t_bstree *tree, t_rbtree *x);
t_bstree			*ef_bstree_copy(t_bstree *tree);

/*
** ==================
** >                <
** >>> HASH TABLE <<<
** >                <
** ==================
*/

# define LOAD_FACTOR	0.7
# define HTABLE_SIZE	5

# define HASH(t,k)		((t)->hsh_key((t_value)(k)) % (t)->capacity)
# define GET_PAIR(l)	((t_kvpair *)(l->data))

typedef struct		s_kvpair
{
	void			*key;
	void			*value;
}					t_kvpair;

typedef struct		s_htable
{
	t_dlist			**array;
	int				size;
	int				capacity;
	f_hsh			hsh_key;
	f_cmp			cmp_key;
	f_del			del_key;
	f_del			del_value;
}					t_htable;

// Create
t_kvpair			*ef_kvpair_alloc(void);
t_kvpair			*ef_kvpair_new(void * key, void *value);
t_htable			*ef_htable_alloc(int size);
t_htable			*ef_htable_new(f_hsh hsh_key, f_cmp cmp_key,
									f_del del_key, f_del del_value);
void				ef_htable_resize(t_htable *table);

// Set
void				ef_htable_insert(t_htable *table, t_kvpair *pair);
void				ef_htable_set(t_htable *table, void *key, void *value);

// Get
t_dlist				*ef_htable_find(t_htable *table, void *key);
void				*ef_htable_get(t_htable *table, void *key);

// Delete
void				ef_kvpair_free(t_kvpair *pair, f_del del_key,
									f_del del_value);
t_kvpair			*ef_htable_pop(t_htable *table);
void				ef_htable_delete(t_htable *table, t_dlist *node);
void				ef_htable_remove(t_htable *table, void *key);
void				ef_htable_clear(t_htable *table);
void				ef_htable_free(t_htable *table);

// Traverse
void				ef_htable_traverse(t_htable *table, f_trw trw);

// Status
int					ef_htable_size(t_htable *table);
t_darray			*ef_htable_pairs(t_htable *table);

// Extra
int					ef_htable_hash(t_htable *table, void *key);
int					ef_hash_pointer(void *pointer);
int					ef_hash_string(void *string);
int					ef_hash_integer(void *integer);

#endif
