
template <typename T>
Vect<T>::Vect() : capacity(1), length(0), data(new T[1])
{

}

template <typename T>
Vect<T>::Vect(const int reserveSize) : capacity(reserveSize), length(0), data(new T[reserveSize])
{

}

template <typename T>
Vect<T>::~Vect()
{
	delete[] data;
}


template <typename T>
int Vect<T>::count() const
{
	return length;
}

template <typename T>
void Vect<T>::push_back(const T& p_data)
{
	if (length == capacity)
	{
		extendArray();
	}
	
	data[length] = p_data;
	++length;
}

template <typename T>
void Vect<T>::push_back(T&& p_data)
{
	if (length == capacity)
	{
		extendArray();
	}

	data[length] = std::move(p_data);
	++length;
}

template <typename T>
void Vect<T>::extendArray()
{
	T* temp = data;
	data = new T[capacity * 2];

	for (int k = 0; k < capacity; k++)
	{
		data[k] = std::move((temp[k]));
	}

	delete[] temp;
	capacity *= 2;
}

template <typename T>
T& Vect<T>::operator[](const int index) const
{
	return data[index];
}