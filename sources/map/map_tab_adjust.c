/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tab_adjust.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:34:31 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/28 19:43:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	map_tab_adjust(int **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		map_tab_adjust_line(tab[i]);
		i++;
	}
}
