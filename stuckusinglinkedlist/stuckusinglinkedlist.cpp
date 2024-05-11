// stuckusinglinkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//node class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

//stack class
class Stack {
private:
	Node* top;		//pointer to the top node of the stack

public:
	Stack() {
		top = NULL;		// initialize the stack with a null top pointer
	}
};

int main()
{
  
}
