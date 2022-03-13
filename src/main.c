/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnataliz <jnataliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:42:25 by jnataliz          #+#    #+#             */
/*   Updated: 2022/03/12 11:11:09 by jnataliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/stack.h"
#include "../ft_printf/include/ft_printf.h"
#include <stdlib.h>

int main()
{
	int	y[]= {2,3,4,34,6,7,7,789};
    print_stack(new_stack(y, 8));
}
