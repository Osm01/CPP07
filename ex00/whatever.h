
#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"


template <typename T>
void	swap(T &v1, T &v2)
{
	T   tmp;

	tmp = v1;
	v1 = v2;
	v2 = tmp;
}

template <typename T>
T   &min(T &v1, T &v2)
{
	return (v1 >= v2 ? v2 : v1);
}

template <typename T>
T   &max(T &v1, T &v2)
{
	if (v1 == v2)
		return v2;
	return (v1 > v2 ? v1 : v2);
}

#endif