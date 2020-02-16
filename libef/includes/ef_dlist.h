/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:31:12 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:38:57 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_DLIST_H
# define EF_DLIST_H

# include "libft.h"
# include "ef_define.h"

/*
** ===========================
** >						 <
** >>> DOUBLY LINKED LISTS <<<
** >						 <
** ===========================
*/

typedef struct		s_dlist
{
	void			*data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}					t_dlist;

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

#endif
