/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libef.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:00:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/28 09:28:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDS_H
# define LIBDS_H

# include "libft.h"

# define MALLOC_ERROR	1

typedef int			(*f_cmp)(void *, void *);
typedef void		(*f_del)(void *);
typedef void		*(*f_cpy)(void *);
typedef void		*(f_mfy)(void *);

/*
** ======================
** >                    <
** >>> DYNAMIC ARRARY <<<
** >                    <
** ======================
*/

# define MIN_SIZE		16

typedef struct		s_rdarray
{
	void			*data;
	int				elem_no;
	int				capacity;
	size_t			elem_size;
}					t_rdarray;

typedef struct		s_darray
{
	void			*data;
	int				elem_no;
}					t_darray;

# define ef_darray_append(a,v)		ef_darray_append_array(a, &(v), 1)
# define ef_darray_prepend(a,v)		ef_darray_prepend_array(a, &(v), 1)
# define ef_darray_insert(a,i,v)	ef_darray_insert_array(a, i, &(v), 1)
# define ef_darray_index(a,t,i)		(((t *)(a)->data)[(i)])

t_darray			*ef_darray_new(size_t elem_size);
t_darray			*ef_darray_sized_new(size_t elem_size, size_t arr_size);
t_darray			*ef_darray_increment(t_darray *darr);
t_darray			*ef_darray_decrement(t_darray *darr);
int					ef_darray_length(t_darray *darr);
size_t				ef_darray_elem_size(t_darray *darr);
void				ef_darray_expand_capacity(t_darray *darr, int elem_no);
void				ef_darray_append_array(t_darray *darr, void *arr,
											int arr_len);
void				ef_darray_prepend_array(t_darray *darr, void *arr,
												int arr_len);
void				ef_darray_insert_array(t_darray *darr, int index,
											void *arr, int arr_len);
void				ef_darray_remove(t_darray *darr, int index);
void				ef_darray_remove_last_elem(t_darray *darr);
void				ef_darray_remove_range(t_darray *darr, int index, int len);
void				ef_darray_swap(t_darray *darr, int index1, int index2);
void				ef_darray_sort(t_darray *darr, f_cmp cmp);
void				ef_darray_reverse(t_darray *darr);
t_darray			*ef_darray_partition(t_darray *darr, int start, int end);
void				ef_darray_free(t_darray *darr);

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

t_slist				*ef_slist_alloc(void);
t_slist				*ef_slist_new(void *data);

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

int					ef_slist_node_index(t_slist *list, t_slist *node);
int					ef_slist_data_index(t_slist *list, void *data);
t_slist				*ef_slist_last_node(t_slist *list);
t_slist				*ef_slist_nth_node(t_slist *list, int n);
void				*ef_slist_nth_data(t_slist *list, int n);
t_slist				*ef_slist_find(t_slist *list, void *data);
t_slist				*ef_slist_find_custom(t_slist *list, void *data, f_cmp cmp);

t_slist				*ef_slist_sort(t_slist *list, f_cmp cmp);
t_slist				*ef_slist_reverse(t_slist *list);
t_slist				*ef_slist_rotate(t_slist *list, int n);

int					ef_slist_length(t_slist *list);
t_slist				*ef_slist_copy(t_slist *list);
t_slist				*ef_slist_copy_deep(t_slist *list, f_cpy cpy);
void				ef_slist_for_each(t_slist *list, f_mfy mfy);

t_slist				*ef_slist_remove(t_slist *list, void *data);
t_slist				*ef_slist_remove_custom(t_slist *list, void *data,
											f_cmp cmp);
t_slist				*ef_slist_remove_all(t_slist *list, void *data);
t_slist				*ef_slist_remove_all_custom(t_slist *list, void *data,
												f_cmp cmp);

t_slist				*ef_slist_remove_node(t_slist *list, t_slist *node);
t_slist				*ef_slist_delete_node(t_slist *list, t_slist *node);

void				ef_slist_free_node(t_slist *node);
void				ef_slist_free_list(t_slist *list);
void				ef_slist_free_all(t_slist *list, f_del del);

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

t_dlist				*ef_dlist_alloc(void);
t_dlist				*ef_dlist_new(void *data);

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

int					ef_dlist_node_index(t_dlist *list, t_dlist *node);
int					ef_dlist_data_index(t_dlist *list, void *data);
t_dlist				*ef_dlist_first_node(t_dlist *list);
t_dlist				*ef_dlist_last_node(t_dlist *list);
t_dlist				*ef_dlist_nth_node(t_dlist *list, int n);
void				*ef_dlist_nth_data(t_dlist *list, int n);
t_dlist				*ef_dlist_find(t_dlist *list, void *data);
t_dlist				*ef_dlist_find_custom(t_dlist *list, void *data, f_cmp cmp);

t_dlist				*ef_dlist_sort(t_dlist *list, f_cmp cmp);
t_dlist				*ef_dlist_reverse(t_dlist *list);
t_dlist				*ef_dlist_rotate(t_dlist *list, int n);

int					ef_dlist_length(t_dlist *list);
t_dlist				*ef_dlist_copy(t_dlist *list);
t_dlist				*ef_dlist_copy_deep(t_dlist *list, f_cpy cpy);
void				ef_dlist_for_each(t_dlist *list, f_mfy mfy);

t_dlist				*ef_dlist_remove(t_dlist *list, void *data);
t_dlist				*ef_dlist_remove_custom(t_dlist *list, void *data,
											f_cmp cmp);
t_dlist				*ef_dlist_remove_all(t_dlist *list, void *data);
t_dlist				*ef_dlist_remove_all_custom(t_dlist *list, void *data,
												f_cmp cmp);

t_dlist				*ef_dlist_remove_node(t_dlist *list, t_dlist *node);
t_dlist				*ef_dlist_delete_node(t_dlist *list, t_dlist *node);

void				ef_dlist_free_node(t_dlist *node);
void				ef_dlist_free_list(t_dlist *list);
void				ef_dlist_free_all(t_dlist *list, f_del del);

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

t_deque				*ef_deque_alloc(void);
t_deque				*ef_deque_new(t_dlist *list);

t_bool				ef_deque_is_empty(t_deque *queue);
int					ef_deque_length(t_deque *queue);

void				ef_deque_push_head(t_deque *queue, void *data);
void				ef_deque_push_tail(t_deque *queue, void *data);
void				ef_deque_push_nth(t_deque *queue, void *data);

void				*ef_deque_pop_head(t_deque *queue);
void				*ef_deque_pop_tail(t_deque *queue);
void				*ef_deque_pop_nth(t_deque *queue);

void				*ef_deque_peek_head(t_deque *queue);
void				*ef_deque_peek_tail(t_deque *queue);
void				*ef_deque_peek_nth(t_deque *queue);

void				ef_deque_sort(t_deque *queue, f_cmp cmp);
void				ef_deque_reverse(t_deque *queue);
void				ef_deque_rotate(t_deque *queue, int n);
t_deque				*ef_deque_copy(t_deque *queue);

void				ef_deque_clear_queue(t_deque *queue);
void				ef_deque_clear_all(t_deque *queue, f_del del);

void				ef_deque_free_queue(t_deque *queue);
void				ef_deque_free_all(t_deque *queue, f_del del);

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

typedef int			t_traverse_flag;

enum				e_traverse_order
{
	IN_ORDER,
	PRE_ORDER,
	POST_ORDER,
	LEVEL_ORDER
};

enum				e_traverse_part
{
	LEAF,
	NON_LEAF,
	ALL
};

t_ntree				*ef_ntree_alloc(void);
t_ntree				*ef_ntree_new(void *data);

void				ef_ntree_append_child(t_ntree *parent, t_ntree *child);
void				ef_ntree_prepend_child(t_ntree *parent, t_ntree *child);
void				ef_ntree_insert_child(t_ntree *parent, t_ntree *child);
void				ef_ntree_insert_child_before(t_ntree *parent,
													t_ntree *child,
													t_ntree *sibling);
void				ef_ntree_insert_child_after(t_ntree *parent, t_ntree *child,
													t_ntree *sibling);

t_ntree				*ef_ntree_last_child(t_ntree *parent);

void				ef_ntree_reverse_children(t_ntree *parent);

void				ef_ntree_in_order_traverse(t_ntree *tree, f_mfy mfy,
												t_traverse_flag part);
void				ef_ntree_in_order_depth_traverse(t_ntree *tree, int depth,
														f_mfy mfy,
														t_traverse_flag part);
void				ef_ntree_pre_order_traverse(t_ntree *tree, f_mfy mfy,
												t_traverse_flag part);
void				ef_ntree_pre_order_depth_traverse(t_ntree *tree, int depth,
														f_mfy mfy,
														t_traverse_flag part);
void				ef_ntree_post_order_traverse(t_ntree *tree, f_mfy mfy,
													t_traverse_flag part);
void				ef_ntree_post_order_depth_traverse(t_ntree *tree, int depth,
														f_mfy mfy,
														t_traverse_flag part);
void				ef_ntree_level_order_traverse(t_ntree *tree, f_mfy mfy,
													t_traverse_flag part);
void				ef_ntree_level_order_depth_traverse(t_ntree *tree, int depth,
														f_mfy mfy,
														t_traverse_flag part);
void				ef_ntree_traverse(t_ntree *tree, int depth, f_mfy mfy,
										t_traverse_flag order,
										t_traverse_flag part);

t_ntree				*ef_ntree_copy(t_ntree *tree);
t_ntree				*ef_ntree_copy_deep(t_ntree *tree, f_cpy cpy);


/*
** ==================
** >                <
** >>> HASH TABLE <<<
** >                <
** ==================
*/



#endif
