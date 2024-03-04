#ifndef ITER_H
# define ITER_H

# include <iostream>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

template <typename T>
void	fun(T &v)
{
	if (v >= 'a' && v <= 'z')
		v += ('A' - 'a');
	else if (v >= 'A' && v <= 'Z')
		v -= ('A' - 'a');
	else
		v += 10;
}

template <typename T0 , typename T1>
void	iter(T0 *array, int length, T1 fun)
{
	for (int i = 0; i < length; i++)
	{
		fun(array[i]);
	}
}

#endif //ITER_H
