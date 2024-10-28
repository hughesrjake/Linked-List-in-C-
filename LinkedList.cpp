#include <iostream>
#include "LinkedList.h"


LinkedList::LinkedList() : head(nullptr) {} // constructor initialized head to null 

LinkedList::~LinkedList() {
    clear();
}

void LinkedList::insert(int inputData) {  // create new node assign data and point to next

    Node* newNode = new Node{ inputData, nullptr }; // initialize node with value pointing toward nullptr (next)

    if (!head) {
        head = newNode; // if head is nullptr, the list was empty. now head points to the first node
    }
    
    else { // the list is not empty
        Node* x = head; // temporary node -> head
        while (x->next) { // t/f is x->nullptr?
            x = x->next; // continue through list until nullptr
        }
        x->next = newNode; // last node is current list
    }
}

void LinkedList::clear() { // should clear entire list
    while (head) { // head is nullptr t/f?
        Node* x = head; 
        head = head->next; // progress through entire list
        delete x;
    }
}

int LinkedList::count(){
    int count = 0; 
    Node* x = head; 
    while (x) { // is x nullptr?
        count++;
        x = x->next; // move through until x -> nullptr
    }
    return count;
}

Node* LinkedList::search(int value) { // find value with value as data
    Node* x = head; 
    while (x) { // x nullptr t/f?
        if (x->data == value) { // data = input
            return x; // return pointer to the found node
        }
        x = x->next; 
    }
    return nullptr; // not found