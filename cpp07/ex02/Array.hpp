#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template< typename T>
class Array
{
	private:
		T *array_;
		int	size_;
	public:
		Array(){
			std::cout << "Constructor Called" << std::endl;
			this->size_ = 0;
			this->array_ = new T [0];
		}
		Array(unsigned int n){
			std::cout << "Constructor Called" << std::endl;
			this->size_ = n;
			this->array_ = new T [this->size_];
			for (unsigned int i = 0; i < n; i++)
				this->array_[i] = T ();
		}
		T & operator[](int idx){
			if (idx >= this->size_ || idx < 0)
				throw std::exception();
			return this->array_[idx];
		}
		Array & operator=(Array & rhs){
			std::cout << "copy assignment called" << std::endl;
			if (this != &rhs){
				if (this->array_ != NULL)
					delete [] this->array_;
				this->size_ = rhs.size_;
				this->array_ = new T [this->size_];
				for (int i = 0; i < this->size_; i++)
					this->array_[i] = rhs.array_[i];
			}
			return (*this);
		}
		Array( Array & origin){ 
			std::cout << "copy constructor called" << std::endl;
			this->array_ = NULL;
			*this = origin;
		}
		~Array(){
			std::cout << "Destructor Called" << std::endl;
			delete [] this->array_;
		}
		
		int size() const{return this->size_;}
};

template < typename T >
std::ostream &operator<<(std::ostream &o, Array<T> & a){
	o << "---------------------" << std::endl;
	for (int i = 0; i < a.size(); i++)
		o << a[i] << std::endl;
	o << "---------------------" << std::endl;
	return o;
}

#endif
