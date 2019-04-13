/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swappairs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 23:02:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/12 11:20:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

t_list	*ft_swappairs(t_list *head)
{
    t_list	*node0;
    t_list	*node1;
    t_list	*node2;
    
    if (!head || !head->next)
        return (head);
    node2 = head->next->next;
    node1 = head;
    head = head->next;
    head->next = node1;
    node1->next = node2;
    for (node0 = node1; node0->next && node0->next->next; node0 = node1)
    {
        node1 = node0->next;
        node2 = node1->next;
        node1->next = node2->next;
        node2->next = node1;
        node0->next = node2;
    }
    return (head);
}
