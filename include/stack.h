/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnataliz <jnataliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:33:17 by jnataliz          #+#    #+#             */
/*   Updated: 2022/03/12 11:12:20 by jnataliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct s_stack
{
	int				*x;
	unsigned int	len;
}	t_stack;

// struct s_stack	*new_stack(int *nums, unsigned int len);
t_stack			*new_stack(int *nums, unsigned int len);
void			*print_stack(struct s_stack *s);
int				head(struct s_stack *s);
int				pop(struct s_stack *s);
void			push(struct s_stack *s, int n);


#endif