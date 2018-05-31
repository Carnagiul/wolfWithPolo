/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sql_connet.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piquerue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:51:30 by piquerue          #+#    #+#             */
/*   Updated: 2018/05/31 15:56:15 by piquerue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

MYSQL			*ft_sql_connect(char *host, char *name, char *passwd)
{
	MYSQL		*con;

	con = mysql_init(NULL);
	if (con == NULL)
	{
		ft_printf("%s\n", mysql_error(con));
		exit(1);
	}
	if (mysql_real_connect(con, host, name, passwd, NULL, 0, NULL, 0) == NULL)
	{
		ft_printf("%s\n", mysql_error(con));
		mysql_close(con);
		exit(1);
	}
	return (con);
}
