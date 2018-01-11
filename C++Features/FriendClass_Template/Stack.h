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
    ~Stack () { /* your code here */
        Node <Data> *node = nullptr;
        while (head != nullptr) {
            node = head;
            head = head->next;
            delete node;
        }
    }

    // creates an empty stack
    Stack () { /* your code here */
        head = nullptr;
    }

    // adds pushMe to the top of the stack
    void push (Data data) { /* your code here */
        Node <Data> *node = new Node<Data>(data, head);
        head = node;
    }

    // return true if there are not any items in the stack
    bool isEmpty () { /* replace with your code */
        return head == nullptr;
    }

    // pops the item on the top of the stack off, returning it...
    // if the stack is empty, the behavior is undefined
    Data pop () { /* replace with your code */
        Node <Data> *node = head;
        Data val = head->holdMe;
        head = head->next;
        delete node;
        return val;
    }
};
#endif
