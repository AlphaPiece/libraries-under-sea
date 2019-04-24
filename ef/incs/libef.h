/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libef.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:00:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 08:38:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDS_H
# define LIBDS_H

# include "libft.h"

/*
** slist
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
t_slist				*ef_slist_insert_before(t_slist *list, t_slist *sibling,
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

#endif
