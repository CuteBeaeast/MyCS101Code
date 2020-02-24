#ifndef STACK_H
#define STACK_H

#include "LinkedList.hpp"

template<class T>
class Stack: protected LinkedList<T>
{
public:
    // Constructor and Destructor
    Stack();
    ~Stack();

    // mutator
    void push(T elem);
    T pop();
};

#include "Stack.cpp"

#endif