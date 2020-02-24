#ifndef MinHeap_H
#define MinHeap_H

template<class T>
class MinHeap
{
public:
    // Constructors and Destructors
    MinHeap(int size);
    ~MinHeap();

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

#include "MinHeap.cpp"

#endif