/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:22:12 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/05/12 17:22:14 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_mlx	stc;

	if (ac != 2)
		error_usage();
	stc_init(&stc);
	stc.map = check_map(av[1], &(stc.verf));
	open_wind(&stc);
	return (0);
}
