/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnataliz <jnataliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:47:28 by jnataliz          #+#    #+#             */
/*   Updated: 2022/03/12 11:21:29 by jnataliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/stack.h"
#include "../ft_printf/include/ft_printf.h"
#include <stdlib.h>

struct	s_stack	*new_stack(int *nums, unsigned int len)
{
	unsigned int				i;
	int							*y;
	struct s_stack				*stack;

	y = malloc(sizeof(int) * (len));
	if (!y)
		return (NULL);
	stack = malloc(sizeof(struct s_stack));
	if (!stack)
		return (NULL);
	// i = 2
	// nums = {2, 3}
	// len = 2
	// y = malloc(sizeof(int) * 3) = {2, 3, 0}
	// stack = { x = {2, 3, 0}, i = 2 }
	// (i < len) = (2 < 2) = false
	// y[1] = nums[1] = 3
	// stack->x = y
	// stack->i = i = 2
	i = 0;
	while (i < len)
	{
		// ft_printf("new_stack y[%i] = nums[%i]\n", i, i);
		// ft_printf("new_stack y[%i] = %i\n", i, nums[i]);
		y[i] = nums[i];
		i++;
	}
	(*stack).x = y;
	(*stack).len = i;
	return (stack);
}

void	*print_stack(struct s_stack *s)
{
	unsigned int i;
	
	i = 0;
	while (i < (*s).len)
	{
		ft_printf("%i\n", (*s).x[i]);
		i++;
	}
	ft_printf("%c\n", '"');
	return (0);
}


int		head(struct s_stack *s)
{	
		int y;

		y = (*s).x[0];
		return (y);
}

/*
int		pop(struct s_stack *s)
{

}

void	push(struct s_stack *s, int n)
{
	
} */