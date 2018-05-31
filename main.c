#include <my_global.h>
#include <mysql.h>
#include "libft.h"

int		main(void)
{
	printf("MySQL client version: %s\n", mysql_get_client_info());
	return (0);
}
