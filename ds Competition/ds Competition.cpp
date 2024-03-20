#include <iostream>
#include "LinkedList.h"

using namespace std;
int main()
{
	LinkedList ll;
	LinkedList ll2;

	ll.insert(9);
	ll.insert(8);
	ll.insert(14);
	ll.insert(1);
	ll.insert(6);
	ll.insert(20);
	ll.insert(3);
	ll.print();
	cout << "=================\n";
	ll2.insert(4);
	ll2.insert(10);
	ll2.insert(8);
	ll2.insert(6);
	ll2.insert(5);
	ll2.print();
	cout << "=================\n";

	cout << ll.get_min() << " " << ll2.get_min() << endl;
	cout << "=================\n";

	ll.Intersection(ll2);
}
