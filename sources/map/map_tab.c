/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:46:59 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/23 18:00:20 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int	map_tab(t_mlx *mlx, t_ulist *map_obj)
{
	if (map_tab_init(mlx) != 0)
		return (EXIT_FAILURE);
	if (map_tab_create(mlx, map_obj) != 0)
		return (EXIT_FAILURE);
	return (0);
}
