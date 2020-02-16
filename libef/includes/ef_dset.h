/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:54:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/12 08:54:34 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_DSET_H
# define EF_DSET_H

# include "libft.h"
# include "ef_define.h"

/*
** ============================
** >						  <
** >>> DISJOINT-SET FORESTS <<<
** >						  <
** ============================
*/

typedef struct		s_dset
{
	void			*data;
	struct s_dset	*parent;
	struct s_dset	*next;
	int				rank;
}					t_dset;


// Create
t_dset				*ef_dset_alloc(void);
t_dset				*ef_dset_create(void *data);

// Union
t_dset				*ef_dset_union(t_dset *set1, t_dset *set2);

// Find
t_dset				*ef_dset_find(t_dset *set);

// Remove
void				ef_dset_free(t_dset *set, f_del del, t_flag one_or_all);

// Traverse
void				ef_dset_traverse(t_dset *set, f_trv trv);

// Status
int					ef_dset_size(t_dset *set);

#endif
