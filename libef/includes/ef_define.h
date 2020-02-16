/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_define.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:06:57 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:38:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_DEFINE_H
# define EF_DEFINE_H

# include <stdint.h>
# include <stdio.h>

typedef int			(*f_cmp)(void *, void *);
typedef void		(*f_del)(void *);
typedef void		*(*f_cpy)(void *);
typedef void		*(*f_trv)(void *);
typedef void		*(*f_trw)(void *, void *);

typedef int8_t		t_flag;
typedef uint64_t	t_value;

enum				e_one_or_all
{
	ONE,
	ALL
};

enum                e_list_order
{
    FORWARD,
    BACKWARD
};

enum                e_tree_order
{
    IN_ORDER,
    PRE_ORDER,
    POST_ORDER,
    LEVEL_ORDER
};

enum                e_tree_part
{
    LEAF,
    NON_LEAF,
    WHOLE
};

#endif
