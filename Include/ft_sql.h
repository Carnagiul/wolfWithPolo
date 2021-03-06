/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sql.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piquerue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:55:47 by piquerue          #+#    #+#             */
/*   Updated: 2018/05/31 16:30:51 by piquerue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SQL_H
# define FT_SQL_H

# include <my_global.h>
# include <mysql.h>

# define FT_MYSQL_DEBUG 1

MYSQL				*ft_sql_connect(char *host, char *name, char *passwd,
					char *db);
char				*ft_sql_get_version(void);
void				ft_sql_version(void);
int					ft_sql_update(MYSQL *con, char *query);


#endif
