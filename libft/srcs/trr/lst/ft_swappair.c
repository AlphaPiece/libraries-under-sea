/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swappair.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 23:02:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/01/16 23:05:01 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_list	*swapPairs(struct s_list *head)
{
    struct s_list	*node0;
    struct s_list	*node1;
    struct s_list	*node2;
    
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
