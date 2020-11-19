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
class DoublyLinkedList {
  private:
      ListNode<T> *front;
      ListNode<T> *back;
      unsigned int size;

    public:
      DoublyLinkedList<T>();
      ~DoublyLinkedList<T>();
      void insertFront(T d);
      void insertBack(T d);
      T removeFront();
      T removeBack();
      T getFront();

      void printList();
      bool isEmpty();
      int getSize();
};

template <class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    front = NULL;
    back = NULL;
    size = 0;
}

template <class T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    ListNode<T> *current = front;
    while(current != 0) {
      ListNode<T>* next = current->next;
      delete current;
      current = next;
    }
    front = 0;
}

template <class T>
void DoublyLinkedList<T>::printList() {
    ListNode<T> *current = front;

    while(current != NULL) {
      cout << current->data << endl;
      current = current->next;
    }
}
template <class T>
void DoublyLinkedList<T>::insertFront(T d) {
    ListNode<T> *node = new ListNode<T>(d);
    if(size == 0) {
      back = node;
    } else {
      node->next = front;
    }
    front = node;
    ++size;
}

template <class T>
T DoublyLinkedList<T>::removeFront() {
  ListNode<T> *current = front;
  delete front;
  front = current->next;
  return front->data;
}

template <class T>
void DoublyLinkedList<T>::insertBack(T d) {
  ListNode<T> *node = new ListNode<T>(d);
  if(front == NULL) {
    front = back;
  } else {
    back->next = node;
  }
  back = node;
  ++size;
}

template <class T>
T DoublyLinkedList<T>::removeBack() {
  ListNode<T> *current = back;
  delete back;
  back = current->prev;
  return back->data;
}

template <class T>
int DoublyLinkedList<T>::getSize() {
    return size;
}

template <class T>
T DoublyLinkedList<T>::getFront() {
    return front->data;
}
