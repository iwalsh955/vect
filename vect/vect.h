#ifndef VECT_H


#define VECT_H

#include <memory>

template <typename T>
class Vect {

private:

	T* data; //data storage array
	int capacity,length; //capacity is max size length is used size

	void extendArray(); //doubles arrays size

public:

	Vect(const int); //reserve size for array
	Vect(); //default constructor
	int count() const; //returns used length of array
	void push_back(const T); //add new items
	~Vect(); //destruct
	T& operator [](const int) const; //brackets

};

#include "vect.cpp"




#endif // !VECT_H
