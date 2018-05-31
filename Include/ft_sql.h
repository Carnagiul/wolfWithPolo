/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sql.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piquerue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:55:47 by piquerue          #+#    #+#             */
/*   Updated: 2018/05/31 15:59:29 by piquerue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SQL_H
# define FT_SQL_H

# include <my_global.h>
# include <mysql.h>

MYSQL				*ft_sql_connect(char *host, char *name, char *passwd);
char				*ft_sql_get_version(void)
void				ft_sql_version(void)


#endif
