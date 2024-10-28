#pragma once


struct Node {

	int data; // What the actual node holds
	Node* next; // The next piece of data in the linked list
};

class LinkedList {

public:
	LinkedList();
	~LinkedList(); // destructor

	// Methods
	void insert(int inputData);
	void clear();
	int count();
	Node* search(int value);

private:

	Node* head; //points to the head

};