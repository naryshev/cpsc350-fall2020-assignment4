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

using namespace std;

template <class T>
class ListNode {
    public:
        T mData;
        ListNode<T> *next;
        ListNode<T> *prev;

        ListNode();
        ListNode(T mData);
        ~ListNode();
};

template <class T>
ListNode<T>::ListNode() {

}

template <class T>
ListNode<T>::ListNode(T d) {
    mData = d;
    next = NULL;
    prev = NULL;
}

template <class T>
ListNode<T>::~ListNode() {
    if(next != NULL) {
        next = NULL;
        prev = NULL;

        delete next;
        delete prev;
    }
}
