//
// Created by ouidriss on 2/29/24.
//

#ifndef ARRAY_H
#define ARRAY_H

# include <iostream>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

template <typename T>
class Array
{
private :
	T				*data;
	unsigned int	size_elements;
public :
	Array();
	Array(unsigned int n);
	Array(const Array &a);
	Array			&operator=(const Array &a);
	T				&operator[](unsigned int index) const;
	unsigned int	size(void) const;
	~Array();
};

#endif //CPP07_ARRAY_H
