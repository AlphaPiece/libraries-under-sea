/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libef.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:00:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 14:49:48 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDS_H
# define LIBDS_H

# include "libft.h"

/*
** ==========================
** >                        <
** >>> SINGLY-LINKED LIST <<<
** >                        <
** ==========================
*/

typedef struct		s_slist
{
	void			*data;
	struct s_slist	*next;
}					t_slist;

t_slist				*ef_slist_alloc(void);
t_slist				*ef_slist_append(t_slist *list, void *data);
t_slist				*ef_slist_prepend(t_slist *list, void *data);
t_slist				*ef_slist_insert(t_slist *list, void *data, int position);
t_slist				*ef_slist_insert_before(t_slist *list, t_slist *node_link,
											void *data);
t_slist				*ef_slist_sort(t_slist *list, int (*cmp)(void *, void *));
t_slist				*ef_slist_insert_sorted(t_slist *list, void *data,
											int (*cmp)(void *, void *));
t_slist				*ef_slist_remove(t_slist *list, void *data);
t_slist				*ef_slist_remove_all(t_slist *list, void *data);
t_slist				*ef_slist_remove_custom(t_slist *list, void *data,
											int (*cmp)(void *, void *));
t_slist				*ef_slist_remove_all_custom(t_slist *list, void *data,
												int (*cmp)(void *, void *));
t_slist				*ef_slist_remove_link(t_slist *list, t_slist *node_link);
t_slist				*ef_slist_delete_link(t_slist *list, t_slist *node_link);
void				ef_slist_free_node(t_slist *node);
void				ef_slist_free_list(t_slist *list);
void				ef_slist_free_all(t_slist *list, void (*del)(void *));
int					ef_slist_length(t_slist *list);
t_slist				*ef_slist_copy(t_slist *list);
t_slist				*ef_slist_copy_deep(t_slist *list, void *(*cpy)(void *));
t_slist				*ef_slist_reverse(t_slist *list);
t_slist				*ef_slist_concat(t_slist *list1, t_slist *list2);
void				ef_slist_for_each(t_slist *list, void *(*func)(void *));
t_slist				*ef_slist_last_node(t_slist *list);
t_slist				*ef_slist_nth_node(t_slist *list, int n);
void				*ef_slist_nth_data(t_slist *list, int n);
t_slist				*ef_slist_find(t_slist *list, void *data);
t_slist				*ef_slist_find_custom(t_slist *list, void *data,
											int (*cmp)(void *, void *));
int					ef_slist_position(t_slist *list, t_slist *node_link);
int					ef_slist_index(t_slist *list, void *data);

/*
** ==========================
** >                        <
** >>> DOUBLY-LINKED LIST <<<
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
t_dlist				*ef_dlist_append(t_dlist *list, void *data);
t_dlist				*ef_dlist_prepend(t_dlist *list, void *data);
t_dlist				*ef_dlist_insert(t_dlist *list, void *data, int position);
t_dlist				*ef_dlist_insert_before(t_dlist *list, t_dlist *node_link,
											void *data);
t_dlist				*ef_dlist_sort(t_dlist *list, int (*cmp)(void *, void *));
t_dlist				*ef_dlist_insert_sorted(t_dlist *list, void *data,
											int (*cmp)(void *, void *));
t_dlist				*ef_dlist_remove(t_dlist *list, void *data);
t_dlist				*ef_dlist_remove_all(t_dlist *list, void *data);
t_dlist				*ef_dlist_remove_custom(t_dlist *list, void *data,
											int (*cmp)(void *, void *));
t_dlist				*ef_dlist_remove_all_custom(t_dlist *list, void *data,
												int (*cmp)(void *, void *));
t_dlist				*ef_dlist_remove_link(t_dlist *list, t_dlist *node_link);
t_dlist				*ef_dlist_delete_link(t_dlist *list, t_dlist *node_link);
void				ef_dlist_free_node(t_dlist *node);
void				ef_dlist_free_list(t_dlist *list);
void				ef_dlist_free_all(t_dlist *list, void (*del)(void *));
int					ef_dlist_length(t_dlist *list);
t_dlist				*ef_dlist_copy(t_dlist *list);
t_dlist				*ef_dlist_copy_deep(t_dlist *list, void *(*cpy)(void *));
t_dlist				*ef_dlist_reverse(t_dlist *list);
t_dlist				*ef_dlist_concat(t_dlist *list1, t_dlist *list2);
void				ef_dlist_for_each(t_dlist *list, void *(*func)(void *));
t_dlist				*ef_dlist_first_node(t_dlist *list);
t_dlist				*ef_dlist_last_node(t_dlist *list);
t_dlist				*ef_dlist_nth_node(t_dlist *list, int n);
void				*ef_dlist_nth_data(t_dlist *list, int n);
t_dlist				*ef_dlist_find(t_dlist *list, void *data);
t_dlist				*ef_dlist_find_custom(t_dlist *list, void *data,
											int (*cmp)(void *, void *));
int					ef_dlist_position(t_dlist *list, t_dlist *node_link);
int					ef_dlist_index(t_dlist *list, void *data);

#endif
