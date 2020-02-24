#include "MinHeap.hpp"
#include "Functions.hpp"
#include <stdexcept>

template<class T>
MinHeap<T>::MinHeap(int size)
:m_size(size), m_numElem(0)
{
    m_data = new T[size + 1];

    return ;
}

template<class T>
MinHeap<T>::~MinHeap()
{
    delete[] m_data;

    return;
}


template<class T>
T MinHeap<T>::Top()
{
    return m_data[1];
}

template<class T>
int MinHeap<T>::get_length()
{
    return m_numElem;
}

template<class T>
void MinHeap<T>::set_size(int size)
{
    m_size = size;

    m_data = new T[size + 1];
    
    return ;
}

template<class T>
void MinHeap<T>::push(T elem)
{
    if(m_numElem >= m_size)
        throw std::invalid_argument("MinHeap size out of range");

    m_data[m_numElem + 1] = elem;

    m_numElem ++;

    percolate_up(m_numElem);

    return;
}

template<class T>
T MinHeap<T>::pop()
{
    T temp = m_data[1];

    swap(& m_data[1], & m_data[m_numElem]);

    // delete m_data[m_numElem];

    m_numElem --;

    percolate_down(1);

    return temp;

}

template<class T>
void MinHeap<T>::percolate_up(int index)
{
    if(index == 1)
        return;

    if(m_data[index] > m_data[index/2])
        return;
    else
    {
        swap(& m_data[index] , & m_data[index/2]);

        percolate_up(index/2);

        return ;
    }
}

template<class T>
void MinHeap<T>::percolate_down(int index)
{
    if(2*index > m_numElem)
        return;
    
    if(2*index + 1 > m_numElem)
    {
        if(m_data[index] <= m_data[2*index])
            return;
        else
        {
            swap(& m_data[index], & m_data[2*index]);
            return;
        }
        
    }

    if((m_data[index] <= m_data[2*index]) && (m_data[index] <= m_data[2*index+1]))
        return;
    else if(m_data[2*index+1] > m_data[2*index])
    {
        swap(& m_data[index], & m_data[2*index]);

        percolate_down(2*index);

        return;

    }else if(m_data[2*index+1] <= m_data[2*index])
    {
        swap(& m_data[index], & m_data[2*index+1]);

        percolate_down(2*index+1);

        return;
    }
}