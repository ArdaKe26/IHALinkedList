#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

struct Node {
	int data;
	Node* next;
};

class LinkedList {
private:
	Node* head;
	int size;


public:
	LinkedList();
	~LinkedList();


	void addFront(int val);
	void addBack(int val);
	void removeFront();
	void removeBack();
	int getElement(int index);
	int getSize();
	void printList();
};

#endif