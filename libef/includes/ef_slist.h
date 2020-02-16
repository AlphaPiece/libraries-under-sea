/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:22:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:32:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_SLIST_H
# define EF_SLIST_H

# include "libft.h"
# include "ef_define.h"

/*
** ===========================
** >						 <
** >>> SINGLY LINKED LISTS <<<
** >						 <
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

#endif

