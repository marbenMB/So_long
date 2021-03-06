/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:52:07 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/05/12 17:52:09 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_map_size(char **tab)
{
	if (ft_strlen(tab[0]) > 56 || map_height(tab) > 31)
	{
		free_tab(tab);
		ft_putendl_fd("\033[33m* MAX SIZE : 56 / 31 *\033[0m", 2);
		exit (EXIT_FAILURE);
	}
}

void	error_map(char **tab)
{
	free_tab(tab);
	ft_putendl_fd("\033[31m Error ** Map Error **\033[0m", 2);
	exit (EXIT_FAILURE);
}

void	error_file(void)
{
	ft_putendl_fd("\033[31m Error ** No such file **\033[0m", 2);
	exit (EXIT_FAILURE);
}

void	error_name(void)
{
	ft_putendl_fd("\033[31m Error ** Map Name : name.ber **\033[0m", 2);
	exit (EXIT_FAILURE);
}

void	error_usage(void)
{
	ft_putendl_fd("\033[31m Error ** Usage : ./so_long  map/path **\033[0m", 2);
	exit (EXIT_FAILURE);
}
