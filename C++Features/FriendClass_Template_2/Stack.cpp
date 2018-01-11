#ifndef STACK_CPP
#define STACK_CPP

// The implementation of a simple LIFO stack

#include "Stack.h"

// destroys the stack
template <class Data>
Stack<Data>::~Stack () { /* your code here */
    Node <Data> *node = nullptr;
    while (head != nullptr) {
        node = head;
        head = head->next;
        delete node;
    }
}

// creates an empty stack
template <class Data>
Stack<Data>::Stack () { /* your code here */
    head = nullptr;
}

// adds pushMe to the top of the stack
template <class Data>
void Stack<Data>::push (Data data) { /* your code here */
    Node <Data> *node = new Node<Data>(data, head);
    head = node;
}

// return true if there are not any items in the stack
template <class Data>
bool Stack<Data>::isEmpty () { /* replace with your code */
    return head == nullptr;
}

// pops the item on the top of the stack off, returning it...
// if the stack is empty, the behavior is undefined
template <class Data>
Data Stack<Data>::pop () { /* replace with your code */
    Node <Data> *node = head;
    Data val = head->holdMe;
    head = head->next;
    delete node;
    return val;
}
#endif
