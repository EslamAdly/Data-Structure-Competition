#pragma once
struct Node 
{
	int val;
	Node* next;
	Node(int val) :val(val), next(nullptr) {};
};
class LinkedList
{
public:
	int size;
	Node* head;
	Node* tail;
	LinkedList();
	~LinkedList();
	void insert(int val);
	void print();
	int get_min();
	void marge(const LinkedList& list);
	void Intersection(const LinkedList& list);
};

