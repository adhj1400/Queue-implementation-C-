#include "queue.h"
#include <iostream>



void Queue::enqueue(int value)
{
	node* ptr = new node(value);

	if (head == 0) 
	{
		head = ptr;
		tail = ptr;
		return;
	}

	tail->prev = ptr;
	ptr->next = tail;
	tail = ptr;
}

int Queue::dequeue()
{
	if (head == 0)
	{
		return 0;
	}

	int val = head->value;
	node* oldHead = head;

	if (head != tail) 
	{	
		head->prev->next = 0;
		head = head->prev;
	} 
	else 
	{
		tail = 0;
		head = 0;
	}

	delete oldHead;

	return val;
}

// For debug purposes
void Queue::print()
{
	if (head == 0) {
		std::cerr << "List is empty." << std::endl;
		return;
	}
	node* tmp = tail;
	std::cout << std::endl << "[TAIL] ";
	while(tmp != 0)
	{
		std::cout << tmp->value;
		if (tmp->next != 0)
			std::cout << "->";
		tmp = tmp->next;

	}
	std::cout << " [HEAD]\n" << std::endl;
}


