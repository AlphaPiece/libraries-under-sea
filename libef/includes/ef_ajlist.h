/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ajlist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:56:17 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/12 08:56:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_AJLIST_H
# define EF_AJLIST_H

# include "libft.h"
# include "ef_define.h"

/*
** ======================
** >					<
** >>> ADJACENCY LIST <<<
** >					<
** ======================
*/

typedef t_htable	t_ajlist;

typedef t_kvpair	t_vertex;

typedef t_dlist		t_edge;

typedef struct		s_vdata
{
	void			*value;
	t_edge			*edges;
	char			color;
}					t_vdata;

typedef struct		s_edata
{
	t_vertex		*dst;
	int				weight;
}					t_edata;

// Create
t_ajlist			*ef_ajlist_alloc(void);
t_ajlist			*ef_ajlist_create(f_cmp cmp_vertex_key,
										f_del del_vertex_key,
										f_del del_vertex_value);

// Set
void				ef_ajlist_add_vertex(t_ajlist *graph, void *key,
											void *value);

#endif
