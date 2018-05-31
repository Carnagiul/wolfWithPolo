/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piquerue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:33:13 by piquerue          #+#    #+#             */
/*   Updated: 2018/05/31 16:50:33 by piquerue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	MYSQL	*con;

	con = ft_sql_connect("minegamers.fr", "WOLF3D", "42", "WOLF3D");
	if (con)
		ft_sql_update(con, "INSERT INTO `users` (`id`, `name`) VALUES (NULL, 'test');");
	ft_sql_version();
	return (0);
}
