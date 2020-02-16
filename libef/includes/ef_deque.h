/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:34:26 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/12 08:34:34 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_DEQUE_H
# define EF_DEQUE_H

# include "ef_dlist.h"

/*
** ===========================
** >						 <
** >>> DOUBLE-ENDED QUEUES <<<
** >						 <
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

#endif
