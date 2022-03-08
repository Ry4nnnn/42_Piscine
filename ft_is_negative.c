/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:18:48 by welim             #+#    #+#             */
/*   Updated: 2022/02/15 18:44:23 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int x)
{
	if (x < 0)
	{
		write(1, &"N", 1);
	}
	else
	{
		write(1, &"P", 1);
	}
}
