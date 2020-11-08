
#include "../headder/load.h"

TEMP
SimDS::LinkedList1d<type>::LinkedList1d() {
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}

TEMP
SimDS::LinkedList1d<type>::node1d* SimDS::LinkedList1d<type>::getHead() {
	return this->head;
}

TEMP
SimDS::LinkedList1d<type>::node1d* SimDS::LinkedList1d<type>::getTail() {
	return this->tail;
}

TEMP
int SimDS::LinkedList1d<type>::getSize() {
	return this->size;
}

TEMP
SimDS::LinkedList1d<type>::node1d* SimDS::LinkedList1d<type>::getNode(int position) {
	if (position > this->size) {
		throw "Index out of bound.";
	}
	node1d* ptr = this->head;
	for (int i = 0; i <= position; i++)
		ptr = ptr->nxt;
	return ptr;
}

TEMP
int SimDS::LinkedList1d<type>::find(type data) {
	int index = 0;
	node1d* ptr = this->head;
	for (; ((ptr != NULL) && (index <= this->size) && (ptr->data != data)); ((index++) && (ptr = ptr->nxt)));
	return index;
}

TEMP
SimDS::LinkedList2d<type>::LinkedList2d() {
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}

TEMP
SimDS::LinkedList2d<type>::node2d* SimDS::LinkedList2d<type>::getHead() {
	return this->head;
}

TEMP
SimDS::LinkedList2d<type>::node2d* SimDS::LinkedList2d<type>::getTail() {
	return this->tail;
}
