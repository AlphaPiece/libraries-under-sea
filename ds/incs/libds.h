/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libds.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:00:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/15 16:11:50 by Zexi Wang        ###   ########.fr       */
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


