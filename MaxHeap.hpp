#ifndef MAXHEAP_H
#define MAXHEAP_H

template<class T>
class MaxHeap
{
public:
    // Constructors and Destructors
    MaxHeap(int size);
    ~MaxHeap();

    // Accessor
    T Top();
    int get_length();

    // Mutator
    void push(T elem);
    void set_size(int size);
    void percolate_up(int index);
    void percolate_down(int index);

    // auxilary functions
    T pop();

private:
    T* m_data;
    int m_size;
    int m_numElem;
};

#include "MaxHeap.cpp"

#endif