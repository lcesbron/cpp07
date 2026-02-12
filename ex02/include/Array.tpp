template <typename T>
Array<T>::Array(void):
size_(0),
arr_(new T[0]()) {}

template <typename T>
Array<T>::Array(Array const& toCopy):
size_(toCopy.size_)
{
	for (unsigned int i = 0; i < this->size_; i++)
	{
		this->arr_[i] = toCopy.arr_[i];
	}
}

template <typename T>
Array<T>::Array(unsigned int n):
size_(n),
arr_(new T[n]()) {}

template <typename T>
Array<T>::~Array()
{
	delete[] (this->arr_);
}

template <typename T>
Array<T>&	Array<T>::operator=(Array<T> const& toCopy)
{
	this->size_ = toCopy.size_;
	for (unsigned int i = 0; i < this->size_; i++)
	{
		this->arr_[i] = toCopy.arr_[i];
	}
	return (*this);
}

template <typename T>
T&		Array<T>::operator[](unsigned int index) const
{
	if (index >= this->size_)
		throw outOfBoundsException();
	return (this->arr_[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->size_);
}

template <typename T>
const char*	Array<T>::outOfBoundsException::what(void) const throw()
{
	return ("Tried index is out of array's bounds");
}
