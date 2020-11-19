/*
Daniel Naryshev
2327209
dnaryshev@chapman.edu

Eshaan Vora
2318955
evora@chapman.edu

Assignment 4 - Registrar Office
*/

#include <iostream>
#include "ListNode.h"

using namespace std;

template <class T>
class GenQueue {
    public:
        ListNode<T> *front;
        ListNode<T> *back;
        int numElements;
        GenQueue();
        ~GenQueue();

        void enqueue(T d);
        T dequeue();

        T vFront();
        T vBack();

        void printQueue();

        bool isEmpty();
        unsigned int getSize();
};

template <class T>
GenQueue<T>::GenQueue() {
    numElements = 0;
    front = NULL;
    back = NULL;
}

template <class T>
GenQueue<T>::~GenQueue() {

}

template <class T>
void GenQueue<T>::enqueue(T d) {
    ListNode<T> *node = new ListNode<T>(d);

    if(numElements == 0) {
        front = node;
    }
    else {
        back->next = node;
        node->prev = back;
    }

    back = node;
    ++numElements;
}

template <class T>
T GenQueue<T>::dequeue() {
    if(!isEmpty()) {
        ListNode<T> *node = front;
        T temp = node->mData;
        if(front->next == NULL) {
            front = NULL;
            back = NULL;
        }
        else {
            front->next->prev = NULL;
            front = front->next;
        }
        delete node;
        --numElements;
        return temp;
    }
    else {
        return T();
    }
}

template <class T>
T GenQueue<T>::vFront() {
    return front->mData;
}

template <class T>
T GenQueue<T>::vBack() {
    return back->mData;
}

template <class T>
void GenQueue<T>::printQueue() {
    ListNode<T> *curr = front;

    while(true) {
        if(curr != NULL) {
            cout << curr->mData << endl;
            curr = curr->next;
        }
        else {
            break;
        }
    }
}

template <class T>
bool GenQueue<T>::isEmpty() {
    return (numElements == 0);
}

template <class T>
unsigned int GenQueue<T>::getSize() {
    return numElements;
}
