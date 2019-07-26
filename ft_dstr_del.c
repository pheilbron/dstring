#include "dstring.h"

void	ft_dstr_del(t_dstring s)
{
	free(s.buf);
}
