#include "Stack.hpp"

template<class T>
Stack<T>::Stack()
: LinkedList<T>()
{
    // LinkedList<T>();
}

template<class T>
Stack<T>::~Stack()
{
    while(this->get_length() > 0)
        pop();
}

template<class T>
void Stack<T>::push(T elem)
{
    this->push_front(elem);
}

template<class T>
T Stack<T>::pop()
{
    return this->pop_front();
}