#include <iostream>

void	put(const char *msg);

int	ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

int	main()
{
	const char *s = "hello abdellah";
	put(s);
}