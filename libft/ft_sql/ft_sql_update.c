/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sql_update.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piquerue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:03:48 by piquerue          #+#    #+#             */
/*   Updated: 2018/05/31 16:29:27 by piquerue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_sql_update(MYSQL *con, char *query)
{
	int		result;

	result = 0;
	if (con != NULL)
		result = mysql_query(con, query);
	if (FT_MYSQL_DEBUG)
		ft_printf("query\t{\n\t\t%s\t,\n\t\t%d\n}\n", query, result);
	return (result);
}
