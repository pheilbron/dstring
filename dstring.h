
#ifndef DSTRING_H
# define DSTRING_H

# include <stdlib.h>

typedef	struct	s_dstring
{
	char	*buf;
	size_t	cap;
	size_t	pos;
}				t_dstring;

void	ft_dstr_new(t_dstring *dstr, char *data, size_t len, size_t cap);
void	ft_dstr_add(t_dstring *dstr, char *new_data, size_t len);
void	ft_dstr_del(t_dstring dstr);
size_t	ft_dstr_extend(t_dstring *dstr, size_t len);

#endif
