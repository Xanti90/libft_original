/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:10:15 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/08 13:10:17 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*del_lst;
	t_list	*tmp_lst;

	if (!lst || !del)
		return ;
	tmp_lst = *lst;
	while (tmp_lst)
	{
		del_lst = tmp_lst;
		tmp_lst = tmp_lst->next;
		ft_lstdelone(del_lst, del);
	}
	*lst = 0;
}
