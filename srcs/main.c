/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwarpath <kwarpath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:21:30 by kwarpath          #+#    #+#             */
/*   Updated: 2022/09/03 14:51:14 by kwarpath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	t_game	*game;

	data = parse(argc, argv);
	game = init_game(data);
	mlx_loop_hook(game->mlx_ptr, recasting, game);
	mlx_hook(game->win_ptr, 2, 0, key_manager, game);
	mlx_hook(game->win_ptr, 17, 0, exit_ok, NULL);
	mlx_loop(game->mlx_ptr);
	return (0);
}
