/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:58:40 by mortins-          #+#    #+#             */
/*   Updated: 2022/11/14 17:40:28 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

//	Checks if it was given an alphanumeric character

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
