/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 07:34:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/05 08:29:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHR_H
# define FT_CHR_H

# include "ft_type.h"

/*
** ========================
** >                      <
** >>> ASCII CHARACTERS <<<
** >                      <
** ========================
*/

t_bool				ft_isalnum(int c);
t_bool				ft_isalpha(int c);
t_bool				ft_isascii(int c);
t_bool				ft_isdigit(int c);
t_bool				ft_isspace(int c);
t_bool				ft_isprint(int c);
t_bool				ft_islower(int c);
t_bool				ft_isupper(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

#endif
