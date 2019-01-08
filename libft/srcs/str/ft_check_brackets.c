/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_brackets.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:37:03 by zwang             #+#    #+#             */
/*   Updated: 2019/01/07 21:28:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define IS_OPEN(c) (c == '(' || c == '[' || c == '{')
#define IS_CLOSE(c) (c == ')' || c == ']' || c == '}')

static char match(char open)
{
    char    close;

    close = '\0';
    if (open == '(')
        close = ')';
    else if (open == '[')
        close = ']';
    else if (open == '{')
        close = '}';
    return (close);
}

t_bool    check(char *s, int *i, char close1)
{
    char    close2;
    
    while (s[*i])
    {
        if (s[*i] == close1)
            return (true);
        if (IS_CLOSE(s[*i]))
            return (false);
        if (IS_OPEN(s[*i]))
        {
            close2 = match(s[*i]);
            (*i)++;
            if (!check(s, i, close2))
                return (false);
        }
        (*i)++;
    }
    return (false);   
}

t_bool    ft_check_brackets(char *s)
{
    int     i;
    char    close;
    
    i = 0;
    while (s[i])
    {
        if (IS_CLOSE(s[i]))
            return (false);
        if (IS_OPEN(s[i]))
        {
            close = match(s[i]);
            i++;
            if (!check(s, &i, close))
                return (false);
        }
        i++;
    }
    return (true);
}
