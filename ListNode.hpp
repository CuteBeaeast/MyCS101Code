#ifndef LISTNODE_H
#define LISTNODE_H

template<class T>
class ListNode
{
public:
    // Constructor and Destructor
    ListNode(T elem, ListNode<T>* next = nullptr);
    ~ListNode();

    // Accessors
    T get_elem();
    ListNode<T>* get_next();

    // Mutators
    void set_elem(T elem);
    void set_next(ListNode<T>* next);

private:
    T m_elem;
    ListNode<T>* m_next;
};

#include "ListNode.cpp"

#endif