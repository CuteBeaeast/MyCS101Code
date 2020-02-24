#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "ListNode.hpp"

template <class T>
class LinkedList
{
public:
    // Constructor and Destructor
    LinkedList();
    ~LinkedList();

    // Accessor
    ListNode<T>* get_head();
    ListNode<T>* get_tail();
    int get_length();
    
    // Mutator
    void push_front(T elem);
    void push_back(T elem);
    T pop_front();


private:
    ListNode<T>* m_head;
    ListNode<T>* m_tail;
    int m_length;
};

#include "LinkedList.cpp"

#endif