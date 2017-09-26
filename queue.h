#ifndef QUEUE_H
#define QUEUE_H

class Queue 
{
	public:
		void enqueue(int value);
		int dequeue();
		void print();
	private:
		struct node 
		{
			node(int value, node* next = 0, node* prev = 0)
			{
				this->value = value;
				this->next = next;
				this->prev = prev;
			}
			int value;
			node* next;
			node* prev;
		};

		node* head = 0;
		node* tail = 0;
};

#endif