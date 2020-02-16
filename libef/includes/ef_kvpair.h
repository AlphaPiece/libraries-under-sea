/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_kvpair.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:05:15 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:31:43 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EF_KVPAIR_H
# define EF_KVPAIR_H

# include "libft.h"
# include "ef_define.h"

/*
** =======================
** >					 <
** >>> KEY-VALUE PAIRS <<<
** >					 <
** =======================
*/

typedef struct		s_kvpair
{
	void			*key;
	void			*value;
}					t_kvpair;

// Create
t_kvpair			*ef_kvpair_alloc(void);
t_kvpair			*ef_kvpair_create(void *key, void *value);

// Remove
void				ef_kvpair_free(t_kvpair *pair, f_del del_key,
									f_del del_value);

#endif
