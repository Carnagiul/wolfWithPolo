/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sql_version.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piquerue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:57:04 by piquerue          #+#    #+#             */
/*   Updated: 2018/05/31 16:01:45 by piquerue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_sql_version(void)
{
	ft_printf("MySQL client version: %s\n", mysql_get_client_info());
}

char				*ft_sql_get_version(void)
{
	return (ft_strdup(mysql_get_client_info()));
}
