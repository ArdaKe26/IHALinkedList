#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList() {
	head = nullptr;
	size = 0;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		removeFront();
	}
}

void LinkedList::addFront(int val) {
	Node* newNode = new Node();
	newNode->data = val;
	newNode->next = head;
	head = newNode;
	size++;
}

void LinkedList::addBack(int val) {
    if (head == nullptr) {
        addFront(val);
    }
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;
        temp->next = newNode;
        size++;
    }

}

void LinkedList::removeFront() {
    if (head == nullptr) return;

    Node* temp = head;
    head = head->next;
    delete temp;
    size--;
}

void LinkedList::removeBack() {
    if (head == nullptr) {
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
    }

    else {
        Node* temp = head;

        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;
    }

    size--;
}

int LinkedList::getElement(int index) {
    Node* temp = head;

    if (index >= size || index < 0) {
        return -1;
    }

    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }
    return temp->data;
}

int LinkedList::getSize() {
    return size;
}

void LinkedList::printList() {
    Node* temp = head;

    std::cout << "[";
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << "]" << std::endl;
}