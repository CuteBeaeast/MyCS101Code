#include <iostream>
#include "tests.hpp"
#include "ListNode.hpp"
#include "LinkedList.hpp"
#include "Stack.hpp"
#include "Functions.hpp"
#include "MaxHeap.hpp"
#include "MinHeap.hpp"

using namespace std;

void TestListNode()
{
    ListNode<int>* a;
    ListNode<int>* b;

    a = new ListNode<int>(2);
    b = new ListNode<int>(3);

    a->set_next(b);

    if(a->get_elem() == 2)
        cout << "ListNode Test1 passed." << endl;
    else
        cout << "ListNode Test1 failed." << endl;

    if(a->get_next()->get_elem() == 3)
        cout << "ListNode Test2 passed." << endl;
    else
        cout << "ListNode Test2 failed." << endl;

    a->get_next()->set_elem(30);

    if(b->get_elem() == 30)
        cout << "ListNode Test3 passed." << endl;
    else
        cout << "ListNode Test3 failed." << endl;

    cout << endl;

    delete a;
    delete b;
}

void TestLinkedList()
{
    LinkedList<int>* a = new LinkedList<int>();

    for(int i = 0; i < 5; i++)
        a->push_front(i);

    for(int i = 5; i < 10; i++)
        a->push_back(i);

    if(a->get_head()->get_elem() == 4)
        cout << "LinkedList Test1 passed." << endl;
    else
        cout << "LinkedList Test1 failed." << endl;
    
    if(a->pop_front() == 4 && a->get_head()->get_elem() == 3)
        cout << "LinkedList Test2 passed." << endl;
    else
        cout << "LinkedList Test2 failed." << endl;
    
    if(a->get_tail()->get_elem() == 9)
        cout << "LinkedList Test3 passed." << endl;
    else
        cout << "LinkedList Test3 failed." << endl;

    cout << endl;
}

void TestStack()
{
    Stack<int>* s;

    s = new Stack<int>();

    for(int i = 0; i < 5; i++)
        s->push(i);

    if(s->pop() == 4)
        cout << "Stack Test1 passed." << endl;
    else
        cout << "Stack Test1 failed." << endl;


    if(s->pop() == 3)
        cout << "Stack Test1 passed." << endl;
    else
        cout << "Stack Test1 failed." << endl;
    

    if(s->pop() == 2)
        cout << "Stack Test1 passed." << endl;
    else
        cout << "Stack Test1 failed." << endl;
    
    delete s;

    cout << endl;
}

void TestFunctions()
{
    int a = 1;
    int b = 2;

    
    swap(& a,& b);

    if(a==2&&b==1)
        cout << "Swap Test1 passed." << endl;
    else
        cout << "Swap Test1 failed." << endl;

    ListNode<int> a1(1);
    ListNode<int> b1(2);

    swap(& a1, & b1);

    if(a1.get_elem()==2 && b1.get_elem()==1)
        cout << "Swap Test2 passed." << endl;
    else
        cout << "Swap Test2 failed." << endl;

    cout << endl;

    return ;
}

void TestHeap()
{
    MaxHeap<int> a(10);

    a.push(3);
    a.push(6);
    a.push(5);
    a.push(1);
    a.push(2);
    a.push(4);

    if(a.pop() == 6)
        cout << "MaxHeap Test1 passed." << endl;
    else
        cout << "MaxHeap Test1 failed." << endl;

    if(a.pop() == 5)
        cout << "MaxHeap Test2 passed." << endl;
    else
        cout << "MaxHeap Test2 failed." << endl;

    cout << endl;

    MinHeap<int> b(10);

    b.push(3);
    b.push(6);
    b.push(5);
    b.push(1);
    b.push(2);
    b.push(4);

    if(b.pop() == 1)
        cout << "MinHeap Test1 passed." << endl;
    else
        cout << "MinHeap Test1 failed." << endl;

    if(b.pop() == 2)
        cout << "MinHeap Test2 passed." << endl;
    else
        cout << "MinHeap Test2 failed." << endl;

    cout << endl;

}