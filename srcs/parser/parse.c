/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwarpath <kwarpath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:22:49 by kwarpath          #+#    #+#             */
/*   Updated: 2022/09/03 14:51:06 by kwarpath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

t_data	*parse(int argc, char **argv)
{
	char	*str;
	t_data	*data;

	if (argc != 2)
		put_error(INVALID_ARG_COUNT, ERR_ARG);
	str = read_file(argv[1]);
	data = convert_line_to_data(str);
	free(str);
	return (data);
}
