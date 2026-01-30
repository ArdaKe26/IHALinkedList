#include <iostream>
#include "LinkedList.hpp"

int main(){
	LinkedList list;

	std::cout << "New Empty Linked List" << std::endl;
	list.printList();


	list.addBack(50);
	list.addBack(60);
	list.addBack(70);
	list.addBack(80);

	std::cout << "After adding elements to the back of the Linked List" << std::endl;
	list.printList();

	list.removeBack();

	std::cout << "After removing an element from the back of the Linked List" << std::endl;
	list.printList();

	list.removeFront();

	std::cout << "After removing an element from the front of the Linked List" << std::endl;
	list.printList();

	list.addFront(50);
	list.addFront(40);
	list.addFront(30);
	list.addFront(20);

	std::cout << "After adding elements to the front of the Linked List" << std::endl;
	list.printList();

	std::cout << "Reading the desired element from the Linked List" << std::endl;
	std::cout << "Element at index 2 is: " << list.getElement(2) << std::endl;

	std::cout << "Size of this Linked List is: " << list.getSize() << std::endl;


	return 0;
}