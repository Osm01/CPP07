
#include "Array.h"

template <typename T>
Array<T>::Array() : size_elements(0)
{
	this->data = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n) : data(NULL) , size_elements(n)
{
	this->data = new T[n];
	if (this->data)
		std::cout << GREEN << "ARRAY ALLOCATED SUCCESFULLY" << RESET << std::endl;
	else
		std::cout << RED << "ARRAY FAILED TO ALLOCATED" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &a)
{
	this->data = NULL;
	this->size_elements = 0;
	*this = a;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &a){
	if (this != &a)
	{
		if (this->data != NULL)
			delete []this->data;
		if (a.size_elements > 0)
		{
			this->data = new T[a.size_elements];
			if (this->data)
			{
				this->size_elements = a.size_elements;
				for (unsigned int i = 0; i < this->size_elements; i++) {
					this->data[i] = a.data[i];
				}
				std::cout << GREEN << "DATA IS COPIED SUCCESSFULLY" << RESET << std::endl;
			}
			else
				std::cout << RED << "DATA IS FAILED TO COPIED" << RESET << std::endl;
		}
		else
			std::cout << RED << "Empty data" << RESET << std::endl;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	if (this->data != NULL)
		delete []this->data;
	std::cout << RED << "Calling destructor" << RESET << std::endl;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->size_elements);
}

template<typename T>
T &Array<T>::operator[](unsigned int index)  const {
	if (this->size_elements == 0 || index < 0 || index > this->size_elements - 1)
		throw std::out_of_range("index out of range");
	return (this->data[index]);
}

int main(void)
{
	{
		std::cout << BLUE << "TRY INT ARRAY " << RESET << std::endl;
		Array<int> a(3);
		try
		{
			a[0] = 10;
			a[1] = 20;
			a[1] = 30;
			a[1] = 40;
			a[2] = 50;
			int i = -1;
			while (++i < static_cast<int>(a.size()))
				std::cout << "at index : " << i << " : " << a[i] << std::endl;
			std::cout << YELLOW << "COPING DATA" << RESET << std::endl;
			Array<int> b(a);
			i = -1;
			while (++i < static_cast<int>(b.size()))
				std::cout << "at index : " << i << " : " << a[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << BLUE << "TRY CHAR ARRAY " << RESET << std::endl;
		Array<char> a(3);
		try
		{
			a[0] = 'a';
			a[1] = 'b';
			a[2] = 'c';
			int i = -1;
			while (++i < static_cast<int>(a.size()))
				std::cout << "at index : " << i << " : " << a[i] << std::endl;
			Array<char> b(a);
			i = -1;
			while (++i < static_cast<int>(b.size()))
				std::cout << "at index : " << i << " : " << a[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}