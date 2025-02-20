/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_circ_lst_length.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahirzall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 08:07:10 by ahirzall          #+#    #+#             */
/*   Updated: 2025/02/20 08:07:57 by ahirzall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_list.h"
#include <stdlib.h>

int get_circular_len(t_list_node *head)
{
    t_list_node *curr;
    int len;

    if (!head)
        return (0);
    len = 0;
    curr = head;
    while (1)
    {
        len++;
        curr = curr->next;
        if (curr == head)
            break;
    }
    return (len);
}
