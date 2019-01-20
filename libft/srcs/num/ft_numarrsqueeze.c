/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numarrsqueeze.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:56:00 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/01/19 19:56:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_numarrsqueeze(int *nums, int len)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < len)
    {
        if (i + 1 >= len || nums[i] != nums[i + 1])
            nums[j++] = nums[i];
        i++;
    }
    return (j);
}
