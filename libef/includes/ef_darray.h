/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:11:42 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:31:55 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_DARRAY_H
# define EF_DARRAY_H

# include "libft.h"
# include "ef_define.h"

/*
** ======================
** >                    <
** >>> DYNAMIC ARRAYS <<<
** >                    <
** ======================
*/

# define DARRAY_LEN     16

typedef struct      s_darray
{
    void            *data;
    int             length;
    int             capacity;
    size_t          elem_size;
}                   t_darray;

// Create
t_darray            *ef_darray_alloc(size_t elem_size, int length);
t_darray            *ef_darray_create(size_t elem_size, int length);
void                ef_darray_resize(t_darray *array);

// Set
void                ef_darray_append(t_darray *array, t_value value);
void                ef_darray_insert(t_darray *array, t_value value, int index);
void                ef_darray_set(t_darray *array, t_value value, int index);

// Get
t_value             ef_darray_get(t_darray *array, int index);
t_value             ef_darray_peek(t_darray *array);

// Remove
t_value             ef_darray_pop(t_darray *array);
t_value             ef_darray_delete(t_darray *array, int index);
void                ef_darray_remove(t_darray *array, t_value value);
void                ef_darray_clear(t_darray *array, f_del del);
void                ef_darray_free(t_darray *array, f_del del);

// Traverse
void                ef_darray_traverse(t_darray *array, f_trv trv);

// Status
int                 ef_darray_length(t_darray *array);
size_t              ef_darray_elem_size(t_darray *array);
int                 ef_darray_index(t_darray *array, t_value value);

// Extra
void                ef_darray_swap(t_darray *array, int index1, int index2);
void                ef_darray_sort(t_darray *array, f_cmp cmp);
void                ef_darray_reverse(t_darray *array);
t_darray            *ef_darray_copy(t_darray *array, f_cpy cpy);
t_darray            *ef_darray_partition(t_darray *array, int start, int end,
                                            f_cpy cpy);

#endif
