#ifndef STACK_H
#define STACK_H

template <class Data> 
class Stack;

// this is the node class used to build up the LIFO stack
template <class Data>
class Node {
  private:
    Data holdMe;
    Node *next;
	
  public:
    /*****************************************/
    /** WHATEVER CODE YOU NEED TO ADD HERE!! */
    /*****************************************/
    Node (Data data, Node *n) {
        holdMe = data;
        next = n;
    }

    friend class Stack<Data>;
};

// a simple LIFO stack
template <class Data>
class Stack {
  private:
    Node <Data> *head;

  public:

    // destroys the stack
    ~Stack ();

    // creates an empty stack
    Stack ();

    // adds pushMe to the top of the stack
    void push (Data data);

    // return true if there are not any items in the stack
    bool isEmpty ();

    // pops the item on the top of the stack off, returning it...
    // if the stack is empty, the behavior is undefined
    Data pop ();
};
#endif
