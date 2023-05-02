/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:11:51 by micheng           #+#    #+#             */
/*   Updated: 2023/05/03 05:54:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
void	display(t_list *n)
{
	while (n != NULL)
	{
		printf("%d\n",*(int *)n->content);
		n = n->next;
	}
}

int	main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	node1->content = "node1";
	node1->next = NULL;

	t_list *node2 = malloc(sizeof(t_list));
	node2->content = "node2";
	node2->next = NULL;
	node1->next = node2;

	t_list *node3 = malloc(sizeof(t_list));
	int	a = 10;
	void *ptr = &a;
	node3->content = ptr;
	node3->next = NULL;
	node2->next = node3;
    node3->next = NULL;

	display(ft_lstlast(node1));
	return (0);
}
*/