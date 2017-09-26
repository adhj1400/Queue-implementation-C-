/*
 *	Created by: Adam Hjernquist 2017	
 */

#include "queue.h"
#include <iostream>

int main() 
{
	std::cout << "Queue program [press x and then ENTER to exit]" << std::endl;
	Queue thisQueue;

	while(true) 
	{
		std::cout << "Enqueue or Dequeue? [e/d]";
		char choice;
		std::cin >> choice;

		if (choice == 'e')
		{
			std::cout << "Enter value to insert: ";
			int val;
			std::cin >> val;
			thisQueue.enqueue(val);
		} 
		else if (choice == 'd')
		{
			int value = thisQueue.dequeue();
			std::cout << "Popped value " << value << std::endl;
		}
		else if (choice == 'x')
		{
			std::cout << "Aborting." << std::endl;
			return 0;
		}

		thisQueue.print();
	}

	return 0;
}