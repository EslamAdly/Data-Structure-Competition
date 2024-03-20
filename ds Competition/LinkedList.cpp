#include "LinkedList.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList()
{
	head = tail = NULL;
	size = 0;
}
LinkedList::~LinkedList()
{
	Node* current=head;
	while (current != nullptr) 
	{
		Node* nn = current->next;
		delete current;
		current = nn;

	}
	
}

void LinkedList::insert(int val)
{
	Node* tmp = new Node(val);

	if (size == 0) {
		tail = head = tmp;
	}
	else {
		bool in = false;

		Node* current=head;
		Node* prv = NULL;

		for (int i = 0; i < size; i++) {
			if (val <= current->val) {
				tmp->next = current;				
				if (i == 0) {
					head = tmp;
				}
				else {
					prv->next = tmp;
				}
				in = true;
				break;
			}
			prv = current;
			current = current->next;
		}
		if (!in) {
			tail->next = tmp;
			tail = tmp;
		}

	}
	size++;
}

void LinkedList::print()
{
	Node* current=head;
	while (current != NULL) {
		cout << current->val << endl;
		current = current->next;
	}
}

int LinkedList::get_min()
{
	return head->val;
}

void LinkedList::marge(const LinkedList& list)
{
	Node* current = list.head;
	while (current != NULL) {
		insert(current->val);
		current = current->next;
	}
}

void LinkedList::Intersection(const LinkedList& list)
{
	LinkedList result;
	Node* element = list.head;

	while (element != NULL) {
		Node* current = head;
		while (current != NULL) {
			if (element->val == current->val) {
				result.insert(element->val);
			}
			else if (element->val < current->val) {
				break;
			}
			current = current->next;
		}
		element = element->next;
	}
	result.print();
}
