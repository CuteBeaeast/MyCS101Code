#include "ListNode.hpp"

template <class T>
ListNode<T>::ListNode(T elem, ListNode<T>* next)
: m_elem(elem), m_next(next)
{
    // Nothing else
}

template <class T>
ListNode<T>::~ListNode()
{
    // empty destructor
}

// Accessors
template <class T>
T ListNode<T>::get_elem()
{
    return m_elem;
}

template <class T>
ListNode<T>* ListNode<T>::get_next()
{
    return m_next;
}

// Mutators
template<class T>
void ListNode<T>::set_elem(T elem)
{
    m_elem = elem;
}

template<class T>
void ListNode<T>::set_next(ListNode<T>* next)
{
    m_next = next;
}