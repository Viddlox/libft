/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:22:27 by micheng           #+#    #+#             */
/*   Updated: 2023/05/03 05:54:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;
	
	new_node = (t_list*)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
void	display(t_list *n)
{
  while(n != NULL)
  {
    printf("%d",*(int *)n->content);
    n = n->next;
  }
}

int main(void)
{
	t_list	*node;
	int	a = 1;
	void *ptr = &a;
	node = ft_lstnew(ptr);
	display(node);
	return (0);
}
*/