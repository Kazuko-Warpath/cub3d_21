/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwarpath <kwarpath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:23:04 by kwarpath          #+#    #+#             */
/*   Updated: 2022/09/03 14:51:05 by kwarpath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

int	get_index(const char *str, char delimiter)
{
	int	i;

	i = 0;
	while (str[i] != END_OF_LINE && str[i] != delimiter)
		++i;
	return (i);
}
