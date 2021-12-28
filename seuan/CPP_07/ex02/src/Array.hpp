#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <class T> 
class Array
{
    public:
        Array()
        {
            _arr = NULL;
            _arr_size = 0;
            std::cout << "no parameter." << std::endl; 
        }
        Array(unsigned int n)
        {
            _arr = new T[n];
            _arr_size = n;
            std::cout << "unsigned n parameter." << std::endl;
        }
        Array(const Array& arr)
        {
            *this = arr;
        }
        ~Array()
        {
            delete [] _arr;
            _arr = NULL;
            std::cout << "Destructor called" << std::endl;
        }
        Array &operator = (const Array& arr)
        {
            if (this == &arr)
                return *this;
            _arr = arr;
            _arr_size = arr._arr_size;
        }
        T &operator [] (unsigned int n)
        {
            return (_arr[n]);
        }

        class  OutOfTheLimits : public std::exception
		{
			public:
				virtual const char* what(void) const throw() { return ("this element is out of the limits"); }
		};

    private:
        T *_arr;
        unsigned int _arr_size;
};

#endif