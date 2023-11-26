/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:07:59 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/19 13:55:12 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free(*lst);
	lst = NULL;
}
//
// #include <stdio.h>
// void	delete(void *content) {
// 	char *str = (char *)content;
// 	if (str == NULL)
// 		return;
// 	str = NULL;
// 	free(str);
// }
// void	print_node(void	*content)
// {
// 	printf("%s->", (char *) content);
// }
// int	main(void)
// {
// 	t_list	*llist = NULL;
// 	t_list	*elem1 = ft_lstnew("Hello");
// 	t_list	*elem2 = ft_lstnew("World");
// 	t_list	*elem3 = ft_lstnew("!");
// 	ft_lstadd_back(&llist, elem1);
// 	ft_lstadd_back(&llist, elem2);
// 	ft_lstadd_back(&llist, elem3);
// 	ft_lstiter(llist, print_node);
// 	ft_lstclear(&llist, delete);
// 	return (1);
// }
