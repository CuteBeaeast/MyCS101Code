#include "LinkedList.hpp"
#include "ListNode.hpp"

template <class T>
LinkedList<T>::LinkedList()
:m_head(nullptr), m_tail(nullptr), m_length(0)
{
    // nothing else
}

template<class T>
LinkedList<T>::~LinkedList()
{
    while(m_length > 0)
        pop_front();
}

template<class T>
ListNode<T>* LinkedList<T>::get_head()
{
    return m_head;
}

template<class T>
ListNode<T>* LinkedList<T>::get_tail()
{
    return m_tail;
}

template<class T>
void LinkedList<T>::push_front(T elem)
{
    ListNode<T>* new_node = new ListNode<T>(elem);

    if(m_length == 0)
    {
        m_head = new_node;
        m_tail = new_node;

        m_length++;

        return;
    }
    else
    {
        new_node->set_next(m_head);
        m_head = new_node;

        m_length++;

        return;
    }
}

template<class T>
void LinkedList<T>::push_back(T elem)
{
    ListNode<T>* new_node = new ListNode<T>(elem);

    if(m_length == 0)
    {
        m_head = new_node;
        m_tail = new_node;

        m_length++;

        return;
    }
    else
    {
        m_tail->set_next(new_node);
        
        m_tail = new_node;

        m_length++;

        return;
    }
}

template<class T>
T LinkedList<T>::pop_front()
{
    T elem = m_head->get_elem();

    if(m_length == 1)
    {
        delete m_head;

        m_head = nullptr;
        m_tail = nullptr;

        m_length--;

        return elem;
    }
    else
    {
        ListNode<T>* head = m_head;

        m_head = m_head->get_next();

        m_length--;

        delete head;

        return elem;
    }
}


template<class T>
int LinkedList<T>::get_length()
{
    return m_length;
}