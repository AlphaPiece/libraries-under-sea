/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:49:01 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:22:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_HTABLE_H
# define EF_HTABLE_H

# include "ef_kvpair.h"
# include "ef_darray.h"
# include "ef_dlist.h" 

/*
** ===================
** >				 <
** >>> HASH TABLES <<<
** >				 <
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

#endif
