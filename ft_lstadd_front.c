/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:13:42 by aflorea           #+#    #+#             */
/*   Updated: 2025/12/02 13:13:49 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <assert.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

//int main(void)
//{
//	t_list * l =  NULL;
//	ft_lstadd_front(&l, ft_lstnew((void*)"fgbdrg"));
//	//assert(l->content == (void*)1);
//	//assert(l->next == 0);
//
//	//ft_lstadd_front(&l, ft_lstnew((void*)2));
//	/* 3 */ assert(l->content == (void*)"fgbdrg");
//	/* 4 */ //assert(((t_list *)l->next)->content == (void*)1);
//	/* 5 */ //assert(((t_list *)l->next)->next == 0);
//	//ft_lstclear(&l, free);
//	write(1, "\n", 1);
//	return (0);
//}
